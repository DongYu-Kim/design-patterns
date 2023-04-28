#pragma once
#include <string>

namespace chapter10 {
	class State {
	public:
		virtual void InsertQuarter() = 0;
		virtual void EjectQuarter() = 0;
		virtual void TurnCrank() = 0;
		virtual void Dispense() = 0;
		virtual void Refill() = 0;
		virtual std::string ToString() = 0;
	};
}