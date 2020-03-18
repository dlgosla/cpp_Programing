#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
const int max = 50;
ofstream fout;

class Student {
public:
	int id;
	char name[max];
	int sub;//과목수
	int *score;//과목 점수
	//int avg1 = avg();

	Student();
	Student(const char *name1,int sub,int id1);
	Student(const Student &s);
	~Student();
	double avg();
	void store_in_file();
	void show_data();
	
};
void Student::store_in_file() {

	fout << " " << id << "  " << name << "  " << sub << " ";
	for (int i = 0; i < sub; i++) {
		fout << score[i] << " ";
	}
	fout << endl;
}
double  Student:: avg() {
	double SUM=0,AVG;
	for (int i = 0; i < sub; i++) {
		SUM += score[i];
	}
	AVG = SUM / sub;
	return AVG;
}

void Student::show_data() {
	cout << "아이디: " << id << " 이름: " << name << " 수강 과목수: " << sub<<" 개별과목점수: ";
	for (int i = 0; i < sub; i++) {
		cout << score[i] << " ";
	}
	cout << " 평균: " << avg() << endl;
}

Student::Student() {
	strcpy_s(name, max, "이름없음");
	sub = max;
	score = new int[max];
	id = 0;
	for (int i = 0; i < sub; i++) {//과목수 만큼
		score[i] = 0;
	}

}
Student::Student(const char* name1, int sub, int id1) {
	score = new int[sub];
	for (int i = 0; i < sub; i++) {//과목수 만큼
		score[i] = 0;
	}
	strcpy_s(name, 50, name1);
	id = id1;

}
Student::Student(const Student &s) {
	score = new int[s.sub];
	for (int i = 0; i < s.sub; i++) {//과목수 만큼
		score[i] = 0;
	}
	strcpy_s(name, 50, s.name);
	id = s.id;
}
Student::~Student() {
	delete[] score;
	score = NULL;
}

int main() {
	int size;
	cout << "학생몇명 "<< endl;
	cin >> size;
	
	Student *p = new Student[size];//size만큼 학생 객체생성

	int choice,index=0;
	bool found;
	while (true) {
		cout << "------MENU------" << endl;
		cout << "1.기본학생정보입력" << endl;
		cout << "2.성적입력" << endl;
		cout << "3.전체 파일 저장" << endl;
		cout << "4.전체 화면조회" << endl;
		cout << "5.프로그램 종료" << endl;
		cout << "몇번?" << endl;
		cin >> choice;

		switch (choice){
		case 1:
			if (index < size) {
				cout << "학생 레코드 개설을 위한 입력 (아이디 이름 과목 수)" << endl;
				cin >> p[index].id >> p[index].name >> p[index].sub;
				index++;
			}
			else {
				cout << "입력 학생 수 초과" << endl;
			}
			
			break;
		case 2:
			int ID;
			cout << "ID: " << endl;
			cin >> ID;
			found = false;
			for (int i = 0; i < index; i++) {
				if (p[i].id == ID) {
					for (int j = 0; j < p[i].sub; j++) {//과목수만큼 입력
						cout << "과목 점수입력 " << endl;
						cin >> p[i].score[j];//p[i]번째 객체에 과목수만큼 점수저장
					}//작은for문끝
					found = true;
					break;
				}//if문끝

			}//큰for문끝
			if (found == false) {//id못찾을때
				cout << "없는 id입니다" << endl;
			}
		
			break;
		case 3:
		
			char file_name[50];
			cout << "저장파일이름" << endl;
			cin >> file_name;
			fout.open(file_name,ios::trunc);
			for (int i = 0; i <index ; i++) {
				p[i].store_in_file();
			}

			break;
		case 4:
			for (int i = 0; i < index; i++) {
				p[i].show_data();
			}
			
			break;
		case 5:
			cout << "프로그램을 종료합니다" << endl;
			delete[] p; p = NULL;
			fout.close();
			return 0;
			break;

		default:
			cout << "숫자를 잘못 입력하셨습니다" << endl;
			break;
		}


	}


}//main끝

