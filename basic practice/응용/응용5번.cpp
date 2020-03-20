#include<iostream>
using namespace std;

int main() {
	float F, C;

	cout << "Plase enter Fahrenheit value: ";
	cin >> F;

	C = 5.0f / 9 * (F - 32);

	cout << "Celsius value is " << C << endl;
	
}