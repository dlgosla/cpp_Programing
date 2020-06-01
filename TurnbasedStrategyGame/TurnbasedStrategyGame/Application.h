#pragma once
#include "Unit.h"

class ApplicationType {
private:
	vector<Unit*> unit_list_in_barracks; // 고용가능 유닛 4종류
	vector<Unit*> unit_list; // 고용한 유닛
	int curr_turn; //현제 턴 시작시1
	int MAX_turn;// 총50
	int gold; //채집한 금의 양 시작1000
	int enermy_hp; // 적군 체력
	int flag_status; // 0 진행중 1 패배 2 승리
public:
	ApplicationType();
	~ApplicationType();

	void increase_turn();
	void print_unit_list_in_barracks();
	void print_unit_list();

	void run();
	string get_command();
	bool hire_unit();
	void attack_to_anemy();
	void gather_money();
};
