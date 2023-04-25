#include <iostream>
#include "chapter7_class_adapter_duck.h"

namespace chapter7_class_adapter {
	void MallardDuck::Quack() {
		std::cout << "��" << std::endl;
	}
	void MallardDuck::Fly() {
		std::cout << "Ǫ���" << std::endl;
	}
}