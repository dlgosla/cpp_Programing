#include "Attacker.h"

Attacker::Attacker(int _type, string _name, int _price, int _point)
	:Unit::Unit(_type, _name, _price), attack_point(_point) {}
int Attacker::action() { return attack_point; }
void Attacker::print() {
	cout << "[Attacker] Name:" << name << "(Mining point: " << attack_point << ", Price: "<< price << endl;
}
