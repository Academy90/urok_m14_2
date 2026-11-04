#include <iostream>
using namespace std;
class Wallet {
	double money;
public:
	Wallet(double m = 0.0) : money{ m } {}
	Wallet substract(const Wallet& other) const {
		return Wallet{ this->money - other.money };
	}
	Wallet makeDebt() const {
		return Wallet{ -this->money };
	}
	void print() const {
		cout << "Money in wallet: " << money << " UAH" << endl;
	}
};

int main(){
	Wallet w1{ 100.0 };
	Wallet w2{ 50.0 };
	Wallet remainder = w1.substract(w2);
	Wallet debt = w1.makeDebt();
	remainder.makeDebt();
	debt.print();
}