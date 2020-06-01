#pragma once
#include "Unit.h"

class Attacker : public Unit {
protected:
	int attack_point; //°ø°Ý·Â
public:
	Attacker(int _type, string _name, int _price, int _point);
	int action() override;
	void print() override;
};
