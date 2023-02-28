#include <iostream>
#include <sstream>
#include <set>
#include <vector>
#include <map>
#include <iomanip>

class Sale{
    private:
    std::string town;
    std::string product;
    double      price;
    double      quantity;
    double      salesTotal;

    public:
    Sale(std::string town_ ,std::string product_, double price_, double quantity_):town(town_),product(product_),price(price_),quantity(quantity_){
        this->salesTotal = (price * quantity);
    }

    std::string getTown(){return this->town;};
    double getSales(){return this->salesTotal;};

    std::string getProduct(){return this->product;};
};

int main() {
    std::vector<Sale> sales;
    
    int items;
    std::cin>>items;

    std::string   town;
    std::string   product;
    double        price;
    double        quantity;
    double        total;
    
    std::map<std::string, double> salesT;

    for(int i = 0; i<items; i++){
        std::cin>>town>>product>>price>>quantity;
        Sale sell(town, product, price, quantity);
        sales.push_back({sell});
    } 

    for (Sale sale : sales)
    {
        salesT[sale.getTown()] += sale.getSales();
    } 

    for(auto &p: salesT){
        std::cout<< std::fixed << std::setprecision(2)<<p.first <<" -> "<<p.second <<std::endl;
    } 

    return 0;
}