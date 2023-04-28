#include <iostream>
#include "chapter10_state.h"

namespace chapter10 {
	HasQuarterState::HasQuarterState(GumballMachine* gumball_machine) {
		this->gumball_machine_ = gumball_machine;
	}
	void HasQuarterState::InsertQuarter() {
		std::cout << "동전을 넣을 수 없습니다." << std::endl;
	}
	void HasQuarterState::EjectQuarter() {
		std::cout << "동전을 반환합니다." << std::endl;
		this->gumball_machine_->SetState(this->gumball_machine_->GetNoQuarterState());
	}
	void HasQuarterState::TurnCrank() {
		std::cout << "드르륵..." << std::endl;
		if (this->gumball_machine_->GetCount() > 1 && !(rand() % 10)) this->gumball_machine_->SetState(this->gumball_machine_->GetWinnerState());
		else this->gumball_machine_->SetState(this->gumball_machine_->GetSoldState());
	}
	void HasQuarterState::Dispense() {
		std::cout << "사탕껌이 나오지 않습니다." << std::endl;
	}
	void HasQuarterState::Refill() {}
	std::string HasQuarterState::ToString() {
		return "크랭크 돌아가기를 기다리는 중";
	}
}