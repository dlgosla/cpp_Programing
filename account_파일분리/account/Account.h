#ifndef ACCOUNT_H
#define ACCOUNT_H

class ACT {
public:
	char *name;
	int id;
	int balance;

	ACT();
	ACT(const char *n, int i, int b);
	ACT(const ACT &a);
	~ACT();
	void showAllData();
	void inmoney(int val);//이만큼 더해주는거
	bool outmoney(int val);//이만큼 빼주는거 val만큼없으면 false리턴
};
#endif