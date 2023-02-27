#include <iostream>
#include <sstream>
#include <set>

class Sale{
    public:
    std::string town;
    std::string product;
    double      price;
    double      quantity;
    double      salesTotal;
    
    public:
    Sale(std::string town_ ,std::string product_, double price_, double quantity_){
        this->town = town_;
        this->product = product_;
        this->price = price_;
        this->quantity = quantity_;
        this->salesTotal += (price * quantity);
    }
};

int main() {
    std::set<Sale> sales;
    int items;
    std::cin>>items;

    std::string   town;
    std::string   product;
    double        price;
    double        quantity;

    for(int i = 0; i<items; i++){
        std::cin>>town>>product>>price>>quantity;
        Sale sell(town, product, price, quantity);
        sales.insert(sell);
    } 

    for(auto &p: sales){
        std::cout<<p.town << std::endl;
    } 

    return 0;
}