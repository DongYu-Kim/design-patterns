#include <iostream>
#include "chapter10_state_gumball_machine.h"

namespace chapter10 {
	GumballMachine::GumballMachine(unsigned int number_gumballs) {
		this->sold_out_state_ = new SoldOutState(this);
		this->no_quarter_state_ = new NoQuarterState(this);
		this->has_quarter_state_ = new HasQuarterState(this);
		this->sold_state_ = new SoldState(this);
		this->winner_state_ = new WinnerState(this);

		this->count_ = number_gumballs;
		if (this->count_) this->state_ = this->no_quarter_state_;
	}
	GumballMachine::~GumballMachine() {
		delete this->sold_out_state_;
		delete this->no_quarter_state_;
		delete this->has_quarter_state_;
		delete this->sold_state_;
		delete this->winner_state_;
	}
	void GumballMachine::SetState(State* state) {
		this->state_ = state;
	}
	int GumballMachine::GetCount() {
		return this->count_;
	}
	void GumballMachine::ReleaseBall() {
		std::cout << "���Կ��� �������� ���ɴϴ�." << std::endl;
		this->count_--;
	}
	void GumballMachine::Refill(unsigned int count) {
		this->count_ += count;
		std::cout << "������ ��Ⱑ �������Ǿ����ϴ�. ������ ���� : " << this->count_ << std::endl;
		this->state_->Refill();
	}
	void GumballMachine::InsertQuarter() {
		this->state_->InsertQuarter();
	}
	void GumballMachine::EjectQuarter() {
		this->state_->EjectQuarter();
	}
	void GumballMachine::TurnCrank() {
		this->state_->TurnCrank();
		this->state_->Dispense();
	}
	State* GumballMachine::GetState() {
		return this->state_;
	}
	State* GumballMachine::GetSoldOutState() {
		return this->sold_out_state_;
	}
	State* GumballMachine::GetNoQuarterState() {
		return this->no_quarter_state_;
	}
	State* GumballMachine::GetHasQuarterState() {
		return this->has_quarter_state_;
	}
	State* GumballMachine::GetSoldState() {
		return this->sold_state_;
	}
	State* GumballMachine::GetWinnerState() {
		return this->winner_state_;
	}
	std::string GumballMachine::ToString() {
		std::string display = "�ֽ�ȸ�� �ջ̱�\nC++�� ���ư��� 2023���� �̱� ���\n���� ���� : ";
		display += std::to_string(this->count_) + "��\n";
		display += this->state_->ToString() + "\n";
		return display;
	}
}