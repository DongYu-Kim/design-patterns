#include <iostream>
#include "chapter10_state.h"

namespace chapter10 {
	HasQuarterState::HasQuarterState(GumballMachine* gumball_machine) {
		this->gumball_machine_ = gumball_machine;
	}
	void HasQuarterState::InsertQuarter() {
		std::cout << "������ ���� �� �����ϴ�." << std::endl;
	}
	void HasQuarterState::EjectQuarter() {
		std::cout << "������ ��ȯ�մϴ�." << std::endl;
		this->gumball_machine_->SetState(this->gumball_machine_->GetNoQuarterState());
	}
	void HasQuarterState::TurnCrank() {
		std::cout << "�帣��..." << std::endl;
		if (this->gumball_machine_->GetCount() > 1 && !(rand() % 10)) this->gumball_machine_->SetState(this->gumball_machine_->GetWinnerState());
		else this->gumball_machine_->SetState(this->gumball_machine_->GetSoldState());
	}
	void HasQuarterState::Dispense() {
		std::cout << "�������� ������ �ʽ��ϴ�." << std::endl;
	}
	void HasQuarterState::Refill() {}
	std::string HasQuarterState::ToString() {
		return "ũ��ũ ���ư��⸦ ��ٸ��� ��";
	}
}