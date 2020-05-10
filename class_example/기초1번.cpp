#include<iostream>
#include<string>
using namespace std;

class Point {
	int x;
	int y;

public:
	Point(int _x, int _y) {
		x = _x;
		y = _y;
	}

	void setXY(int _x, int _y) {
		x = _x;
		y = _y;
	}

	int getX() {
		return x;
	}

	int getY() {
		return y;
	}

	void print() {
		cout << x << " , " << y << endl;
	}

};
int main(){
	Point pt1(1, 2), pt2(3, 4);
	pt1.setXY(10, 20);
	pt1.print();
	pt2.print();

	cout << pt1.getX() << endl;
	cout << pt2.getY() << endl;

	return 0;
}