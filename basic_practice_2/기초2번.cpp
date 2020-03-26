#include<iostream>
using namespace std;
int get_num();
int myadd(int x, int y);
int mysub(int x, int y);
int mymul(int x, int y);
float mydiv(int x, int y);

int main() {
	int x, y;
	x = get_num();
	y = get_num();

	cout << "x= " << x << ", y= " << y << endl;
	cout << "x + y = " << myadd(x, y) << endl;
	cout << "x - y = " << mysub(x, y) << endl;
	cout << "x * y = " << mymul(x, y) << endl;
	cout << "x / y = " << mydiv(x, y) << endl;

	return 0;
}

int get_num() {
	int num;
	cout << "Enter a number: ";
	cin >> num;
	return num;
}
int myadd(int x, int y) {
	return x + y;
}
int mysub(int x, int y) {
	return x - y;
}
int mymul(int x, int y) {
	return x * y;
}
float mydiv(int x, int y) {
	return (1.0)*x / y;
}