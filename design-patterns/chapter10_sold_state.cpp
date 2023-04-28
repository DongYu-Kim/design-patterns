#include <iostream>
#include "chapter10_state.h"

namespace chapter10 {
	SoldState::SoldState(GumballMachine* gumball_machine) {
		this->gumball_machine_ = gumball_machine;
	}
	void SoldState::InsertQuarter() {
		std::cout << "사탕껌이 나오고 있습니다. 기다려주세요." << std::endl;
	}
	void SoldState::EjectQuarter() {
		std::cout << "죄송하지만, 이미 크랭크를 돌리셨습니다." << std::endl;
	}
	void SoldState::TurnCrank() {
		std::cout << "두번 돌린다고 사탕껌이 더 나오지는 않습니다." << std::endl;
	}
	void SoldState::Dispense() {
		this->gumball_machine_->ReleaseBall();
		if (this->gumball_machine_->GetCount()) this->gumball_machine_->SetState(this->gumball_machine_->GetNoQuarterState());
		else {
			std::cout << "헉! 사탕껌이 다 떨어졌습니다." << std::endl;
			this->gumball_machine_->SetState(this->gumball_machine_->GetSoldOutState());
		}
	}
	void SoldState::Refill() {}
	std::string SoldState::ToString() {
		return "사탕껌 나오는 중";
	}
}