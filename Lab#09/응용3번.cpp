#include<iostream>
#include<cstdlib>
#include<ctime>
#include<algorithm>
using namespace std;

void random_array(int* arr, int n) {
	srand((unsigned int)time(NULL));
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % (n) + 1;
	}
}

void print_arr(int* arr, int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void check_duplication(int* arr , int n) {
	sort(arr, arr + n - 1);
	for (int i = 0; i < n-1 ;i++) {
		if (arr[i] == arr[i + 1]) {
			cout << "Duplicates found." << endl;
			return;
		}
	}

	cout << "Duplicates not found" << endl;

}

int main() {
	int* arr;
	while (true) {
		int n;
		cout << "Please enter a number: ";
		cin >> n;

		if (n < 2) {
			cout << "wrong nymber!!!" << endl;
			return 0;
		}

		int m = n / 2;
		cout << "Size of random array: " << m << endl;
		arr = new int[n];

		cout << "[ Array ]" << endl;
		random_array(arr, n);
		print_arr(arr, m);
		check_duplication(arr, m);
		cout << endl;
	}

	delete[] arr;
	return 0;
}