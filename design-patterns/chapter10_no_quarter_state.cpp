#include <iostream>
#include "chapter10_state.h"

namespace chapter10 {
	NoQuarterState::NoQuarterState(GumballMachine* gumball_machine) {
		this->gumball_machine_ = gumball_machine;
	}
	void NoQuarterState::InsertQuarter() {
		std::cout << "������ �־����ϴ�." << std::endl;
		this->gumball_machine_->SetState(this->gumball_machine_->GetHasQuarterState());
	}
	void NoQuarterState::EjectQuarter() {
		std::cout << "������ ���� �ʾҽ��ϴ�." << std::endl;
	}
	void NoQuarterState::TurnCrank() {
		std::cout << "���� ���� ���Ƚ��ϴ�." << std::endl;
	}
	void NoQuarterState::Dispense() {
		std::cout << "������ ���� �����ϼ���." << std::endl;
	}
	void NoQuarterState::Refill() {}
	std::string NoQuarterState::ToString() {
		return "������ ��ٸ��� ��";
	}
}