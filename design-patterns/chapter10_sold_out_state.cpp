#include <iostream>
#include "chapter10_state.h"

namespace chapter10 {
	SoldOutState::SoldOutState(GumballMachine* gumball_machine) {
		this->gumball_machine_ = gumball_machine;
	}
	void SoldOutState::InsertQuarter() {
		std::cout << "�����Ǿ� ������ ���� �� �����ϴ�." << std::endl;
	}
	void SoldOutState::EjectQuarter() {
		std::cout << "������ ���� ���� �ʾ�, ���� �� �����ϴ�." << std::endl;
	}
	void SoldOutState::TurnCrank() {
		std::cout << "��������, �������� �����ϴ�." << std::endl;
	}
	void SoldOutState::Dispense() {
		std::cout << "�������� ������ �ʽ��ϴ�." << std::endl;
	}
	void SoldOutState::Refill() {
		this->gumball_machine_->SetState(this->gumball_machine_->GetNoQuarterState());
	}
	std::string SoldOutState::ToString() {
		return "����";
	}
}