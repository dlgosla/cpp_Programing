#include "Miner.h"

Miner::Miner(int _type, string _name, int _price, int _point)
	:Unit::Unit(_type, _name, _price), mining_point(_point) {}
int Miner::action(){ return mining_point; }
void Miner::print() {
	cout << "[Miner] Name:" << name << "(Mining point: " << mining_point << ", Price: "<< price << endl;
}