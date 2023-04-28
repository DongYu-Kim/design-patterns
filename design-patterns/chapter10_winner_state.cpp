#include <iostream>
#include "chapter10_state.h"

namespace chapter10 {
	WinnerState::WinnerState(GumballMachine* gumball_machine) {
		this->gumball_machine_ = gumball_machine;
	}
	void WinnerState::InsertQuarter() {
		std::cout << "기다려주세요, 사탕껌이 나오고 있습니다." << std::endl;
	}
	void WinnerState::EjectQuarter() {
		std::cout << "기다려주세요, 사탕껌이 나오고 있습니다." << std::endl;
	}
	void WinnerState::TurnCrank() {
		std::cout << "다시 돌린다고 사탕껌이 더 나오지 않습니다." << std::endl;
	}
	void WinnerState::Dispense() {
		this->gumball_machine_->ReleaseBall();
		if (this->gumball_machine_->GetCount()) {
			this->gumball_machine_->ReleaseBall();
			std::cout << "WINNER입니다. 1코인에 사탕껌 2개를 드립니다." << std::endl;
			if (this->gumball_machine_->GetCount()) this->gumball_machine_->SetState(this->gumball_machine_->GetNoQuarterState());
			else {
				std::cout << "헉! 사탕껌이 다 떨어졌습니다." << std::endl;
				this->gumball_machine_->SetState(this->gumball_machine_->GetSoldOutState());
			}
		}
		else this->gumball_machine_->SetState(this->gumball_machine_->GetSoldOutState());
	}
	void WinnerState::Refill() {}
	std::string WinnerState::ToString() {
		return "WINNER이기 때문에 1코인에 사탕껌 2개가 나옵니다.";
	}
}