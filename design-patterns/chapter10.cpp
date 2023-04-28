#include <iostream>
#include "chapter10_state_gumball_machine.h"

namespace chapter10 {
	void main() {
		std::cout << "========== Chapter10 ==========" << std::endl;
		GumballMachine* gumball_machine = new GumballMachine(10);
		
		std::cout << gumball_machine->ToString() << std::endl;
		gumball_machine->InsertQuarter();
		gumball_machine->TurnCrank();
		gumball_machine->InsertQuarter();
		gumball_machine->TurnCrank();
		std::cout << gumball_machine->ToString() << std::endl;
		gumball_machine->InsertQuarter();
		gumball_machine->TurnCrank();
		gumball_machine->InsertQuarter();
		gumball_machine->TurnCrank();
		gumball_machine->Refill(4);
		std::cout << gumball_machine->ToString() << std::endl;
		gumball_machine->InsertQuarter();
		gumball_machine->TurnCrank();
		gumball_machine->InsertQuarter();
		gumball_machine->TurnCrank();
		std::cout << gumball_machine->ToString() << std::endl;
		gumball_machine->InsertQuarter();
		gumball_machine->TurnCrank();
		gumball_machine->InsertQuarter();
		gumball_machine->TurnCrank();
		std::cout << gumball_machine->ToString() << std::endl;
		gumball_machine->InsertQuarter();
		gumball_machine->TurnCrank();
		gumball_machine->InsertQuarter();
		gumball_machine->TurnCrank();
		std::cout << gumball_machine->ToString() << std::endl;

		delete gumball_machine;
	}
}