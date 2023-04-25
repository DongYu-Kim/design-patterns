#include <iostream>
#include "chapter7_object_adapter_duck.h"

namespace chapter7_object_adapter {
	void MallardDuck::Quack() {
		std::cout << "��" << std::endl;
	}
	void MallardDuck::Fly() {
		std::cout << "Ǫ���" << std::endl;
	}
}