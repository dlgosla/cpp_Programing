#include<iostream>
#include<time.h>
using namespace std;

int main()
{
	int num[9] = { 1,2,3,4,5,6,7,8,9 };
	int answer[3] = {};
	srand((unsigned)time(0));

	//섞기
	for (int i = 0; i < 100; i++)
	{
		int idx1 = rand() % 9;
		int idx2 = rand() % 9;

		int temp = num[idx1];
		num[idx1] = num[idx2];
		num[idx2] = temp;
	}

	//랜덤한 숫자 3개 뽑기
	for (int i = 0; i < 3; i++) {
		answer[i] = num[i];
	}

	while (true) {
		int user[3];
		cout << "세개의 숫자를 입력해 주세요" << endl;
		cin >> user[0] >> user[1] >> user[2];

		for (int i = 0; i < 3; i++) {
			if (user[i] == 0)
				return 0;
		}
		int stlike = 0, ball = 0;

		for (int i = 0; i < 3; i++)
		{
			if (user[i] == answer[i])
				stlike++;
			else
				for (int j = 0; j < 3; j++) {
					if (user[i] == answer[j])
						ball++;
				}
		}
		if (stlike == 0 && ball == 0)
		{
			cout << "out" << endl;
			continue;
		}
		cout << stlike << "stlike, " << ball << "ball" << endl;
		cout << endl;

		if (stlike == 3)
		{
			cout << "정답: " << answer[0] << " " << answer[1] << " " << answer[2] << endl;
			return 0;
		}

	}
	
	
}







