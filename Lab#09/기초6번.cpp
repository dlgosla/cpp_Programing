#include<iostream>
using namespace std;

bool found_char(const char* s, char ch) {
	while (*s != NULL) {
		if (*s == ch)
			return true;
		s++;
	}
	return false;
}

int main() {

	const char* phrase = "this is a phrase";
	for (char ch = 'a'; ch <= 'z'; ch++) {
		cout << ch << " is ";
		if (!found_char(phrase,ch))
			cout << "NOT";
		cout << "in (" << phrase << ")" << endl;
	}
	return 0;
}