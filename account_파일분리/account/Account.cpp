#include<iostream>
#include<cstring>
#include "Account.h"
using namespace std;
const int MAX_NAME = 50;

void ACT::showAllData() {
	cout <<" "<<name<<"ภÜพื: " << id << balance << endl;
}
void ACT::inmoney(int val) {
	balance += val;
}
bool ACT::outmoney(int val) {

	if (balance >= val) {
		balance -= val;
		return true;
	}
	else
		return false;
}
ACT::ACT() {
	id = 0;
	balance = 0;
	name = new char[MAX_NAME];	
}
ACT::ACT(const char *n, int i, int b) {
	id = i;
	balance = b;
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
}
ACT::ACT(const ACT &a) {
	id = a.id;
	balance = a.balance;
	name = new char[strlen(name) + 1];
	strcpy_s(name, strlen(name) + 1, a.name);

}
ACT::~ACT() {
	delete[] name;
	name = NULL;
}

