#include <iostream>
#include <sstream>
#include <set>

class Fraction {
	int numerator;
	int denominator;

public:
	Fraction() {}
	Fraction(int num, int denom) : numerator(num), denominator(denom) {}

	int getNumerator() const {return this->numerator;}

	int getDenominator() const { return this->denominator;}

	void setNumerator(int &numerator) {this->numerator = numerator;}

	void setDenominator(int & denominator ){this->denominator = denominator;}

	bool operator<(const Fraction& other) const {
		return this->numerator * other.denominator < other.numerator * this->denominator;
	}

	bool operator==(const Fraction& other) const {
		return numerator*other.denominator == other.numerator*denominator;
	}
	
	Fraction operator+(const Fraction& other) const { 
		return Fraction(numerator * other.denominator + other.numerator * other.denominator,
		denominator * other.denominator);
	}
	
	Fraction operator-(const Fraction& other) const { 
		return Fraction(numerator * other.denominator - other.numerator * other.denominator,
		denominator * other.denominator);
	}

	friend std::istream& operator >> ( std::istream& istr, Fraction & other) ;

	Fraction operator++ (void) {
		numerator += denominator;
		return *this;
	}

	Fraction operator++ (int) {
		Fraction before = *this;
		numerator += denominator;
		return before;
	}
};

std::istream& operator >>(std::istream& istr, Fraction & other) {
	return istr >> other.numerator >> other.denominator;
}

std::ostream & operator << (std::ostream & ostr, const Fraction & f) {
	return ostr << f.getNumerator() << "/" << f.getDenominator();
}

int main() {
	// NOTE: 1/3 and 2/6 are the same - std::set assumes that 
	// if (a < b) is false and (b < a) is false, then (a == b) is true and will not add 2/6, 
	// because it already has the equivalent value 1/3 in the set
	std::set<Fraction> fractions{ Fraction{2, 6}, Fraction{2, 10}, Fraction{1, 3} };

	for (Fraction f : fractions) {
		std::cout << f << std::endl;
	}

	Fraction f;

	std::cin >> f;
	std::cout << "Pre increment" << std::endl;
	std::cout << ++f << std::endl;
	std::cout << "Post increment" << std::endl;
	f++;
	std::cout << f << std::endl;
	return 0;
}