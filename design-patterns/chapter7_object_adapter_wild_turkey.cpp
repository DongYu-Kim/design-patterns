#include <iostream>
#include "chapter7_object_adapter_turkey.h"

namespace chapter7_object_adapter {
	void WildTurkey::Gobble() {
		std::cout << "��" << std::endl;
	}
	void WildTurkey::Fly() {
		std::cout << "�۴�" << std::endl;
	}
}