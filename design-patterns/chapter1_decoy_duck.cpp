#include <iostream>
#include "chapter1_duck.h"
#include "chapter1_duck_behavior.h"

namespace chapter1 {
	DecoyDuck::DecoyDuck() {
		this->quack_behavior_ = new MuteQuack();
		this->fly_behavior_ = new FlyNoWay();
	}
	void DecoyDuck::Display() {
		std::cout << "��������" << std::endl;
	}
}