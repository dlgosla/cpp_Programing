#include<iostream>
using namespace std;

int main() {

	char grade = 'X';
	int score;
	cout << "Enter your score: ";
	cin >> score;

	if (0 <= score && score <= 100) {
		if (score >= 90)
			grade = 'A';
		else if (80 <= score && score < 90)
			grade = 'B';
		else if (70 <= score && score < 80)
			grade = 'C';
		else if (60 <= score && score < 70)
			grade = 'D';
		else
			grade = 'F';
		cout << "Your grade is "<< grade << endl;
	}
	else
		cout << "The score (" << score << ") is invalid" << endl;

	return 0;
}