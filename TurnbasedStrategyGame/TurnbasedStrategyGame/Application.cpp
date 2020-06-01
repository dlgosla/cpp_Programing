#include "Application.h"
#include "Attacker.h"
#include "Miner.h"

ApplicationType::ApplicationType() {
	unit_list_in_barracks.push_back(new Attacker(1, "swordsMan", 300, 10));
	unit_list_in_barracks.push_back(new Attacker(1, "champion", 1200, 1));
	unit_list_in_barracks.push_back(new Miner(0, "farmer", 200, 20));
	unit_list_in_barracks.push_back(new Miner(0, "landlord", 500, 50));

	curr_turn = 1;
	MAX_turn = 50;
	gold = 1000;
	enermy_hp = 500;
	flag_status = 0;
}
ApplicationType::~ApplicationType() {
	for (auto elem : unit_list_in_barracks) {
		delete elem;
	}
	for (auto elem : unit_list) {
		delete elem;
	}
}
void ApplicationType::increase_turn() {
	curr_turn++;
	if (curr_turn == MAX_turn) {
		flag_status = 1;
		cout << "You lose" << endl;
	}
}
void ApplicationType::print_unit_list_in_barracks() {
	for (Unit* elem : unit_list_in_barracks) {
		elem->print();
	}
}
void ApplicationType::print_unit_list() {
	for (Unit* elem : unit_list) {
		elem->print();
	}
}
void ApplicationType::ApplicationType::run() {
	string sOption;
	while (flag_status == 0) {
		sOption = get_command();
		if (sOption == "1") hire_unit();
		else if (sOption == "2") attack_to_anemy();
		else if (sOption == "3") gather_money();
		else if (sOption == "4") print_unit_list();
		else if (sOption == "5") break;
	}
	cout << "Exit the program..." << endl;
}
string ApplicationType::get_command() {
	cout << "Turn: " << curr_turn << "/" << MAX_turn << endl;
	cout << "Gold: " << gold << endl;
	cout << "Enemy HP: " << enermy_hp << endl;
	cout << endl;

	string input;
	cout << "1. Hire Unit" << endl;
	cout << "2. Attack to Enermy" << endl;
	cout << "3. Gather Money" << endl;
	cout << "4. print Units" << endl;
	cout << "input> ";
	cin >> input;

	return input;
}
bool ApplicationType::hire_unit() {
	print_unit_list_in_barracks();
	cout << "please enter the name: ";
	string unitName;
	cin >> unitName;

	for (Unit* elem : unit_list_in_barracks) {
		if (elem->get_name() == unitName) {
			if (gold > elem->get_price()) {
				unit_list.push_back(elem);
				gold -= elem->get_price();
				cout << "Successfully hired!" << endl;
				increase_turn();
				return true;
			}
		}
	}
	cout << "Error: neither wrong name nor enough gold" << endl;
	return false;
}
void ApplicationType::attack_to_anemy() {
	int sumOfAttackPoint = 0;
	for (Unit* elem : unit_list) {
		if (elem->get_type() == 0)
			sumOfAttackPoint += elem->action();
	}
	enermy_hp -= sumOfAttackPoint;
	increase_turn();
	if (enermy_hp < 0) {
		flag_status = 2;
		cout << "You win" << endl;
	}
}
void ApplicationType::gather_money() {
	int sumOfMiningPoint = 0;
	for (Unit* elem : unit_list) {
		if (elem->get_type() == 1)
			sumOfMiningPoint += elem->action();
	}
	gold += sumOfMiningPoint;
	increase_turn();
}
