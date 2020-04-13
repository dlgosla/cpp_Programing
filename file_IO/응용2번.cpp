#include<iostream>
#include<string>

using namespace std;

//문자열을 ,기준으로 자른다
string slicingStr(string data, int& i,int start, int& length) {
	if (i != 0)
		start = data.find(",", i) + 1;
	length = data.find(",", start + 1) - start;
	string slicedStr = data.substr(start, length);
	return slicedStr;
}

//잘라진 문자열에서 keyword가 포함된 문자열을 찾는다
string findKeyword(string slicedStr,string keyword) {
	if (slicedStr.find(keyword) != string::npos)
		return slicedStr+" ";
	return "";
}

int main() {
	string data = "사랑,프로그래밍,의자,사랑의바보,영통역,천년의사랑,냉장고,객체지향";
	string keyword, searchResult;

	cout << "키워드: ";
	cin >> keyword;

	int i = 0, start = 0, length;
	while (data.find(keyword, i) != string::npos) { 
		string slicedStr = slicingStr(data, i, start, length);  // 문자열을 자른다
		searchResult += findKeyword(slicedStr, keyword);  //잘라진 문자열 중 keyword가 포함된 문자열을 골라 저장한다.
		i += length;
	}

	cout << "검색결과: " << searchResult << endl;

}