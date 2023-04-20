#include <iostream>
#include "chapter1_duck_behavior.h"

namespace chapter1 {
	void MuteQuack::PerformQuack() {
		std::cout << "...(울지 못 한다)" << std::endl;
	}
}