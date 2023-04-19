#include <iostream>
#include "chapter1_duck.h"
#include "chapter1_duck_behavior.h"

using std::cout;
using std::endl;

namespace chapter1_duck {
	RubberDuck::RubberDuck() {
		this->quack_behavior_ = new Squeak();
		this->fly_behavior_ = new FlyNoWay();
	}
	void RubberDuck::Display() {
		cout << "고무오리" << endl;
	}
}