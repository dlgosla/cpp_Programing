#include<iostream>
#include<fstream>
#include<string>
using namespace std;

void writeFile() {
	ofstream fout("input.txt");

	if (!fout)
		cout << "file open error" << endl;

	fout << "In this paper, we explore the feasibility of a" << endl;
	fout << " medical training system for breast tumor palpation based on haptic" << endl;
	fout << " augmented reality (AR) technology. Haptic AR is an emerging" << endl;
	fout << " research area in haptics and virtual reality" << endl;
	fout << " (VR), which is concerned" << endl;
	fout << " with augmenting the haptic" << endl;
	fout << " properties of a real object by means of virtual haptic" << endl;
	fout << " feedback. The AR-based tumor palpation system" << endl;
	fout << " consists of a real breast sample." << endl;

	fout.close();
}

int main() {
	ofstream fout("output.txt");
	writeFile();

	ifstream fin("input.txt");
	if (!fin)
		cout << "file open error" << endl;

	int length;
	cout << "length = ";
	cin >> length;

	char ch;
	int count = 0;
	while (fin.get(ch)) {
		if (ch != '\n') {
			count++;
			fout << ch;
		}
		else
			continue;

		if (count%length == 0){
			fout << endl;
		}
		
	}


}