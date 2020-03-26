#include<iostream>
using namespace std;
int get_num();
int myadd(int x, int y);
int mysub(int x, int y);
int mymul(int x, int y);
float mydiv(int x, int y);

int addmul(int x, int y, int z);
float muldiv(int x, int y, int z);
int addmuladd(int x, int y, int z);
float subdivsub(int x, int y, int z);


int main() {
	int x, y, z;
	x = get_num();
	y = get_num();
	z = get_num();

	cout << "x= " << x << ", y = " << y << " z = " << z << endl;
	cout << "(x + y) * z = " << addmul(x, y, z) << endl;
	cout << "(x * y) / z = " << muldiv(x, y, z) << endl;
	cout << "(x + y) * (y + z) = " << addmuladd(x, y, z) << endl;
	cout << " (x - y) / (y - z) = " << subdivsub(x, y, z) << endl;

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
	return float(x) / y;
}

int addmul(int x, int y, int z) {
	return mymul(myadd(x, y),z);
}
float muldiv(int x, int y, int z) {
	return mydiv(mymul(x, y), z);
}
int addmuladd(int x, int y, int z) {
	return mymul(myadd(x, y), myadd(y,z));
}
float subdivsub(int x, int y, int z) {
	return mydiv(mysub(x, y), mysub(y,z));
}