#include <iostream>
#include "chapter1_duck.h"
#include "chapter1_duck_behavior.h"

using std::cout;
using std::endl;

namespace chapter1 {
	MallardDuck::MallardDuck() {
		this->quack_behavior_ = new Quack();
		this->fly_behavior_ = new FlyWithWings();
	}
	void MallardDuck::Display() {
		cout << "Ã»µÕ¿À¸®" << endl;
	}
}