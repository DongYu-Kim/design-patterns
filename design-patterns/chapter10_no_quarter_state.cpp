#include <iostream>
#include "chapter10_state.h"

namespace chapter10 {
	NoQuarterState::NoQuarterState(GumballMachine* gumball_machine) {
		this->gumball_machine_ = gumball_machine;
	}
	void NoQuarterState::InsertQuarter() {
		std::cout << "동전을 넣었습니다." << std::endl;
		this->gumball_machine_->SetState(this->gumball_machine_->GetHasQuarterState());
	}
	void NoQuarterState::EjectQuarter() {
		std::cout << "동전을 넣지 않았습니다." << std::endl;
	}
	void NoQuarterState::TurnCrank() {
		std::cout << "동전 없이 돌렸습니다." << std::endl;
	}
	void NoQuarterState::Dispense() {
		std::cout << "동전을 먼저 지불하세요." << std::endl;
	}
	void NoQuarterState::Refill() {}
	std::string NoQuarterState::ToString() {
		return "동전을 기다리는 중";
	}
}