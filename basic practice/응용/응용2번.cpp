#include<iostream>
using namespace std;

int main() {

	int A, B;

	cout << "두 수를 입력하세요" << endl;
	cin >> A >> B;

	int sum = A + B;
	int sub = A - B;
	int mul = A * B;
	float div = (float)A / B;
	int remainder = A % B;

	cout << A << " + " << B << "= " << sum << endl;
	cout << A << " - " << B << "= " << sub << endl;
	cout << A << " * " << B << "= " << mul << endl;
	cout << A << " / " << B << "= " << div << endl;
	cout << A << " % " << B << "= " << remainder << endl;

}