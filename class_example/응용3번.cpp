#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Student {
private:
	string name;
	int id;
	string dpt;
	vector<string> subject;
	vector<char> score;

public:
	Student()
		:name("default"), id(0), dpt("depart") {}

	Student(string _name, int _id, string _dpt) {
		name = _name;
		id = _id;
		dpt  =  _dpt;
	}

	void setName(string _name) {
		name = _name;
	}
	void setID(int _id) {
		id = _id;
	}
	void setDpt(string _dpt) {
		dpt = _dpt;
	}
	void print() {
		cout << name << " " << id << " " << dpt << endl;
	}
	void addGrade(string _subject, char _score) {
		subject.push_back(_subject);
		score.push_back(_score);
	}
	void printGrade() {
		for (int i = 0; i < subject.size(); i++)
			cout << subject[i] << " " << score[i] << endl;
		cout << "GPA : " << getGPA() << endl;
	}
	float getGPA() {
		vector<int> GPA;
		for (int i = 0; i < score.size(); i++) {
			switch (score[i])
			{
			case 'A':
				GPA.push_back(4);
				break;
			case 'B':
				GPA.push_back(3);
				break;
			case 'C':
				GPA.push_back(2);
				break;
			case 'D':
				GPA.push_back(1);
				break;
			case 'F':
				GPA.push_back(0);
				break;
			default:
				cout << "error" << endl;
				break;
			}
		}

		int sum = 0;
		for (int i = 0; i < GPA.size(); i++)
			sum += GPA[i];
		float avg = sum * (1.0) / GPA.size();

		return avg;
	}
	void getYear(int year) {
		int admissionYear = id * 0.000001;
		int grade = year - admissionYear;

		if (grade == 0)
			cout << "Freshmen(1학년)" << endl;
		else if (grade == 1)
			cout << "Sophomore(2학년)" << endl;
		else if (grade == 2)
			cout << "Junior(3학년)" << endl;
		else if (grade == 3)
			cout << "Senior(4학년)" << endl;
		else
			cout << "About to graduate(5학년 이상)" << endl;
	}
	

};

int main() {
	Student Harry("Harry", 2017310973, "CS");
	Harry.print();
	Harry.getYear(2019);
	Harry.addGrade("programming", 'A');
	Harry.addGrade("Basic Circuit", 'B');
	Harry.printGrade();
	cout << "\n\n";

	Student Ron;
	Ron.print();
	cout << "\n";
	Ron.setName("Ron");
	Ron.setID(2014103959);
	Ron.setDpt("EE");
	Ron.print();
	Ron.getYear(2019);
	Ron.addGrade("Computer Architecture", 'B');
	Ron.addGrade("Maching Learning", 'B');
	Ron.addGrade("Computer Vision", 'C');
	Ron.printGrade();
	cout << "\n\n";

	return 0;
}