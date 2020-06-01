#pragma once
#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Unit {
protected:
	int type; //0 : 공격 1:채집
	string name; //유닛이름
	int price; //유닛가격
public:
	Unit(int _type, string _name, int _price)
		:type(_type), name(_name), price(_price) {}
	int get_type() { return type; }
	string get_name() { return name; }
	int get_price() { return price; }
	virtual int action() = 0;
	virtual void print() = 0;
};