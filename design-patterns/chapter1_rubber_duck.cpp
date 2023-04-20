#include <iostream>
#include "chapter1_duck.h"
#include "chapter1_duck_behavior.h"

namespace chapter1 {
	RubberDuck::RubberDuck() {
		this->quack_behavior_ = new Squeak();
		this->fly_behavior_ = new FlyNoWay();
	}
	void RubberDuck::Display() {
		std::cout << "고무오리" << std::endl;
	}
}