#include <iostream>
#include "chapter10_state.h"

namespace chapter10 {
	WinnerState::WinnerState(GumballMachine* gumball_machine) {
		this->gumball_machine_ = gumball_machine;
	}
	void WinnerState::InsertQuarter() {
		std::cout << "��ٷ��ּ���, �������� ������ �ֽ��ϴ�." << std::endl;
	}
	void WinnerState::EjectQuarter() {
		std::cout << "��ٷ��ּ���, �������� ������ �ֽ��ϴ�." << std::endl;
	}
	void WinnerState::TurnCrank() {
		std::cout << "�ٽ� �����ٰ� �������� �� ������ �ʽ��ϴ�." << std::endl;
	}
	void WinnerState::Dispense() {
		this->gumball_machine_->ReleaseBall();
		if (this->gumball_machine_->GetCount()) {
			this->gumball_machine_->ReleaseBall();
			std::cout << "WINNER�Դϴ�. 1���ο� ������ 2���� �帳�ϴ�." << std::endl;
			if (this->gumball_machine_->GetCount()) this->gumball_machine_->SetState(this->gumball_machine_->GetNoQuarterState());
			else {
				std::cout << "��! �������� �� ���������ϴ�." << std::endl;
				this->gumball_machine_->SetState(this->gumball_machine_->GetSoldOutState());
			}
		}
		else this->gumball_machine_->SetState(this->gumball_machine_->GetSoldOutState());
	}
	void WinnerState::Refill() {}
	std::string WinnerState::ToString() {
		return "WINNER�̱� ������ 1���ο� ������ 2���� ���ɴϴ�.";
	}
}