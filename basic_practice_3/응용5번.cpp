#include<iostream>
using namespace std;

int gcd(int num1, int num2) {

	if (num1 < num2) {
		int temp = num1;
		num1 = num2;
		num2 = temp;
	}

	if (num1%num2 == 0)
		return num2;

	else
		gcd(num2, (num1%num2));
}

int main() {
	int x, y;
	cout << "x= ";
	cin >> x;

	cout << "y= ";
	cin >> y;

	cout << "gcd(" << x << "," << y << ") = " << gcd(x, y) << endl;
	cin >> x;
	return 0;
}