#include <iostream>
#include "chapter1_duck.h"
#include "chapter1_duck_behavior.h"

using std::cout;
using std::endl;

namespace chapter1 {
	DecoyDuck::DecoyDuck() {
		this->quack_behavior_ = new MuteQuack();
		this->fly_behavior_ = new FlyNoWay();
	}
	void DecoyDuck::Display() {
		cout << "모형오리" << endl;
	}
}