#pragma once
#include "chapter10_state_interface.h"
#include "chapter10_state_gumball_machine.h"

namespace chapter10 {
	class GumballMachine;
	class SoldOutState : public State {
	private:
		GumballMachine* gumball_machine_ = nullptr;
	public:
		SoldOutState(GumballMachine* gumball_machine);
		virtual void InsertQuarter() override;
		virtual void EjectQuarter() override;
		virtual void TurnCrank() override;
		virtual void Dispense() override;
		virtual void Refill() override;
		std::string ToString();
	};

	class NoQuarterState : public State {
	private:
		GumballMachine* gumball_machine_ = nullptr;
	public:
		NoQuarterState(GumballMachine* gumball_machine);
		virtual void InsertQuarter() override;
		virtual void EjectQuarter() override;
		virtual void TurnCrank() override;
		virtual void Dispense() override;
		virtual void Refill() override;
		std::string ToString();
	};

	class HasQuarterState : public State {
	private:
		GumballMachine* gumball_machine_ = nullptr;
	public:
		HasQuarterState(GumballMachine* gumball_machine);
		virtual void InsertQuarter() override;
		virtual void EjectQuarter() override;
		virtual void TurnCrank() override;
		virtual void Dispense() override;
		virtual void Refill() override;
		std::string ToString();
	};

	class SoldState : public State {
	private:
		GumballMachine* gumball_machine_ = nullptr;
	public:
		SoldState(GumballMachine* gumball_machine);
		virtual void InsertQuarter() override;
		virtual void EjectQuarter() override;
		virtual void TurnCrank() override;
		virtual void Dispense() override;
		virtual void Refill() override;
		std::string ToString();
	};

	class WinnerState : public State {
	private:
		GumballMachine* gumball_machine_ = nullptr;
	public:
		WinnerState(GumballMachine* gumball_machine);
		virtual void InsertQuarter() override;
		virtual void EjectQuarter() override;
		virtual void TurnCrank() override;
		virtual void Dispense() override;
		virtual void Refill() override;
		std::string ToString();
	};
}