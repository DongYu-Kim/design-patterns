#include <iostream>
#include "chapter1_duck_behavior.h"

namespace chapter1 {
	void FlyNoWay::PerformFly() {
		std::cout << "...(날지 못 한다)" << std::endl;
	}
}