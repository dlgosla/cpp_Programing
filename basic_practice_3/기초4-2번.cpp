#include<iostream>
using namespace std;

int main() {
	int num;

	do {
		cout << "Enter the number(0,10]: ";
		cin >> num;
	
	} while (!( 0 < num && num <= 10));

	cout << "Success!" << endl;
	return 0;
}