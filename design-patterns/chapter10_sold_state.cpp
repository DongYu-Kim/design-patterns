#include <iostream>
#include "chapter10_state.h"

namespace chapter10 {
	SoldState::SoldState(GumballMachine* gumball_machine) {
		this->gumball_machine_ = gumball_machine;
	}
	void SoldState::InsertQuarter() {
		std::cout << "�������� ������ �ֽ��ϴ�. ��ٷ��ּ���." << std::endl;
	}
	void SoldState::EjectQuarter() {
		std::cout << "�˼�������, �̹� ũ��ũ�� �����̽��ϴ�." << std::endl;
	}
	void SoldState::TurnCrank() {
		std::cout << "�ι� �����ٰ� �������� �� �������� �ʽ��ϴ�." << std::endl;
	}
	void SoldState::Dispense() {
		this->gumball_machine_->ReleaseBall();
		if (this->gumball_machine_->GetCount()) this->gumball_machine_->SetState(this->gumball_machine_->GetNoQuarterState());
		else {
			std::cout << "��! �������� �� ���������ϴ�." << std::endl;
			this->gumball_machine_->SetState(this->gumball_machine_->GetSoldOutState());
		}
	}
	void SoldState::Refill() {}
	std::string SoldState::ToString() {
		return "������ ������ ��";
	}
}