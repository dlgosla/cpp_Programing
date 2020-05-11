#include<iostream>
using namespace std;

int* make_arr(int n) {
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		arr[i] = 2 * i + 1;
	}
	return arr;
}

void print_arr(int* a , int n) {
	cout << "\nOdd Number Array: " << endl;

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}

	cout << endl;
}

int sum_arr(int *a, int n) {
	int s = 0;

	for (int i = 0; i < n; i++)
		s += *(a+i);
	return s;

}

int main() {
	int n;
	cout << "Enter a number: ";
	cin >> n;

	int* arr = make_arr(n);
	print_arr(arr, n);

	int sum = sum_arr(arr, n);
	cout << "\nSum of the array: " << sum << endl;
	
	delete[] arr;
	return 0;
}