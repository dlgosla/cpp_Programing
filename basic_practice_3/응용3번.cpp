#include<iostream>
using namespace std;

int main() {
	int n;
	cout << "number: ";
	cin >> n;

	int sum;
	sum = 0;

	for (int i = 1; i <= n; i++) {
		if (i % 2 == 0 || i % 3 == 0) {
			continue;
		}
		sum += i;
	}
	cout << "sum: " << sum << endl;

	return 0;
}