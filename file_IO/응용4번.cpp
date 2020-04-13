#include<iostream>
#include<fstream>
#include<string>
using namespace std;

void writeText1() {
	ofstream fout1("1.txt");

	if (!fout1)
		cout << "file open error";

	fout1 << "On its 60th anniversary in 2009, Kyung" << endl;
	fout1 << "Hee University prepared for a second leap" << endl;
	fout1 << "forward while seeking a new paradigm of futur" << endl;
	fout1 << "Hee University prepared for a second leap" << endl;
	fout1 << "university development." << endl;

	fout1.close();
}

void writeText2() {
	ofstream fout2("2.txt");

	if (!fout2)
		cout << "file open error";

	fout2 << "In this paper, we explore the feasibility of a" << endl;
	fout2 << "medical training system for breast tumor palpation" << endl;
	fout2 << "based on haptic augmented reality(AR) technology." << endl;

	fout2.close();
}

void mergeFiles() {
	ifstream fin1("1.txt");
	ifstream fin2("2.txt");
	ofstream fout("mergefiles.txt");
	string str;

	if (!fin1 | !fin2 | !fout)
		cout << "file open error";

	while (getline(fin1, str))
		fout << str << endl;

	fout << endl;

	while (getline(fin2, str))
		fout << str << endl;

	fin1.close();
	fin2.close();
	fout.close();
}

int main() {
	
	writeText1();
	writeText2();
	mergeFiles();

	return 0;
}