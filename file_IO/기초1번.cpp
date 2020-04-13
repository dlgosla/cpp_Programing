#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>

using namespace std;

int main() {
	string s1 = "mouse";

	cout << s1 << endl;
	cout << s1.length() << " , " << s1.size() << endl<<endl;

	cout << s1.empty() << endl;
	s1.clear();//s1="";
	cout << s1.empty() << endl << endl;

	s1 = "Good";
	s1 = s1 + "-bye";

	cout << s1 << endl;
	cout << s1[4] << " , " << s1.at(4) << endl;
	cout << (s1 == "Good-bye") << endl;
	cout << (s1 == "good-bye") << endl;
	cout << (s1 >= "z") << endl << endl;

	cout << s1.substr(5, 3) << endl;
	cout << s1.substr(2, 2) << endl;
	cout << s1.find("od") << endl;
	cout << s1.find("od", 5) << endl;

	int od_index = s1.find("od");
	cout << s1.find("od", od_index + 2)<<endl;
	cout << (s1.find("korea") == string::npos) << endl;



}