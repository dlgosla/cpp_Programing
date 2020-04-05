#include<iostream>
using namespace std;

int main() {
	int n, sum = 0;

	cout << "number: ";
	cin >> n;

	for (int i = 1; i <= n ; i++)
		sum += i;

	cout << "Sum of 1 to 100 = " << sum << endl;
	cin >> n;
	return 0;
}