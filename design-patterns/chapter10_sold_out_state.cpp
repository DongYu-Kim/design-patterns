#include <iostream>
#include "chapter10_state.h"

namespace chapter10 {
	SoldOutState::SoldOutState(GumballMachine* gumball_machine) {
		this->gumball_machine_ = gumball_machine;
	}
	void SoldOutState::InsertQuarter() {
		std::cout << "매진되어 동전을 넣을 수 없습니다." << std::endl;
	}
	void SoldOutState::EjectQuarter() {
		std::cout << "동전을 아직 넣지 않아, 꺼낼 수 없습니다." << std::endl;
	}
	void SoldOutState::TurnCrank() {
		std::cout << "돌렸지만, 사탕껌이 없습니다." << std::endl;
	}
	void SoldOutState::Dispense() {
		std::cout << "사탕껌이 나오지 않습니다." << std::endl;
	}
	void SoldOutState::Refill() {
		this->gumball_machine_->SetState(this->gumball_machine_->GetNoQuarterState());
	}
	std::string SoldOutState::ToString() {
		return "매진";
	}
}