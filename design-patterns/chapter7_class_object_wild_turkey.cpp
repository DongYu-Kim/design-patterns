#include <iostream>
#include "chapter7_class_adapter_turkey.h"

namespace chapter7_class_adapter {
	void WildTurkey::Gobble() {
		std::cout << "��" << std::endl;
	}
	void WildTurkey::Fly() {
		std::cout << "�۴�" << std::endl;
	}
}