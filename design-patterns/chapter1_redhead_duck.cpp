#include <iostream>
#include "chapter1_duck.h"
#include "chapter1_duck_behavior.h"

using std::cout;
using std::endl;

namespace chapter1_duck {
	RedheadDuck::RedheadDuck() {
		this->quack_behavior_ = new Quack();
		this->fly_behavior_ = new FlyWithWings();
	}
	void RedheadDuck::Display() {
		cout << "¹Ì±¹ÈòÁ×Áö" << endl;
	}
}