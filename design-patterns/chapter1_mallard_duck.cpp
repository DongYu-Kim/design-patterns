#include <iostream>
#include "chapter1_duck.h"
#include "chapter1_duck_behavior.h"

namespace chapter1 {
	MallardDuck::MallardDuck() {
		this->quack_behavior_ = new Quack();
		this->fly_behavior_ = new FlyWithWings();
	}
	void MallardDuck::Display() {
		std::cout << "Ã»µÕ¿À¸®" << std::endl;
	}
}