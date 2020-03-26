#include<iostream>
using namespace std;
void applePrice(int a = 1000) {
	cout << "Price of an apple is " << a << endl;
}

int main() {
	
	applePrice(1500);
	applePrice(500);
	applePrice(1000);
	applePrice();

	return 0;
}