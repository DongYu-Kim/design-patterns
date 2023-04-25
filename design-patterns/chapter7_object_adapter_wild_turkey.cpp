#include <iostream>
#include "chapter7_object_adapter_turkey.h"

namespace chapter7_object_adapter {
	void WildTurkey::Gobble() {
		std::cout << "²©" << std::endl;
	}
	void WildTurkey::Fly() {
		std::cout << "ÆÛ´ö" << std::endl;
	}
}