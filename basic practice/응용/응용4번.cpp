#include<iostream>
using namespace std;

int main() {

	int A, B, swap;
	cout <<"Plase enter two integer values: " << endl;
	cout << "A: ";
	cin >> A ;
	cout << "B: ";
	cin >> B;

	swap = A;
	A = B;
	B = swap;

	cout << "value of A is : " << A << endl;
	cout << "value of B is : " << B << endl;
}