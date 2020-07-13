#include<iostream>
using namespace std;

class Student {
	char name[100];
	int num;
	
public:
	Student(const char*name, int num);
	~Student();
	void test();
	static int student_count;
	static void printStudentCount();

};
int Student::student_count=0;

Student::Student(const char*name, int num) {
	strcpy_s(this->name, strlen(name) + 1, name);
	this->num = num;
	student_count++;

}
Student::~Student() {
	student_count--;
}
void Student::test() {

}
void Student::printStudentCount() {
	cout << "studnet 객체수" << student_count << endl;
}
void func();//전역벼누말고 스태틱사용하는 거 꼭만들어야되는 거기말
int main() {
	Student::printStudentCount();
	Student S1("ㅎㅇ기현",1234);
	Student::printStudentCount();
	cout << S1.student_count << endl;
	func();
	Student S2("김찬혁", 1235);
	Student::printStudentCount();
}

void func() {
	Student A("남원준", 1234), B("박원준", 1245);
	Student::printStudentCount();


}