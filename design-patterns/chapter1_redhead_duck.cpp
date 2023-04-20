#include <iostream>
#include "chapter1_duck.h"
#include "chapter1_duck_behavior.h"

namespace chapter1 {
	RedheadDuck::RedheadDuck() {
		this->quack_behavior_ = new Quack();
		this->fly_behavior_ = new FlyWithWings();
	}
	void RedheadDuck::Display() {
		std::cout << "¹Ì±¹ÈòÁ×Áö" << std::endl;
	}
}