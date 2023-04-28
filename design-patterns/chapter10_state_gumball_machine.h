#pragma once
#include "chapter10_state.h"

namespace chapter10 {
	class GumballMachine {
	private:
		State* sold_out_state_ = nullptr;
		State* no_quarter_state_ = nullptr;
		State* has_quarter_state_ = nullptr;
		State* sold_state_ = nullptr;
		State* winner_state_ = nullptr;
		State* state_ = sold_out_state_;
		int count_ = 0;

	public:
		GumballMachine(unsigned int number_gumballs);
		~GumballMachine();
		void SetState(State* state);
		int GetCount();
		void ReleaseBall();
		void Refill(unsigned int count);
		void InsertQuarter();
		void EjectQuarter();
		void TurnCrank();
		State* GetState();
		State* GetSoldOutState();
		State* GetNoQuarterState();
		State* GetHasQuarterState();
		State* GetSoldState();
		State* GetWinnerState();
		std::string ToString();
	};
}