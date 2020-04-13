#include<iostream>
using namespace std;

int main() {
	double d1 = 1.23456789;
	cout << d1 << endl;

	cout.width(10);
	cout.precision(3);

	cout << d1 << endl;

	char ch1;
	char ch2;

	cin >> ch1;
	cout << "(" << ch1 << ")" << endl;
	
	cin.ignore();
	cin.unsetf(ios::skipws);

	cin >> ch2;
	cout << "(" << ch2 << ")" << endl;

	
}