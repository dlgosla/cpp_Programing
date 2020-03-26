#include<iostream>
#include<cmath>
using namespace std;
int square(int a);

int main() {
	int x;
	x = 5;
	cout << square(x) << endl;

	return 0;
}

int square(int a) {
	return a * a;
}