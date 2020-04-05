#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	int n, m;

	cout << "Enter n for n x m matrix: ";
	cin >> n;

	cout << "Enter m for n x m matrix";
	cin >> m;

	for (int i = 1 ; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cout << setw(10) << i * j;
		}
		cout << endl;
	}

	return 0;
}