#include <iostream>
#include "chapter7_class_adapter_turkey.h"

namespace chapter7_class_adapter {
	void WildTurkey::Gobble() {
		std::cout << "²©" << std::endl;
	}
	void WildTurkey::Fly() {
		std::cout << "ÆÛ´ö" << std::endl;
	}
}