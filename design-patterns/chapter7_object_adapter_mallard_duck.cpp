#include <iostream>
#include "chapter7_object_adapter_duck.h"

namespace chapter7_object_adapter {
	void MallardDuck::Quack() {
		std::cout << "²Ð" << std::endl;
	}
	void MallardDuck::Fly() {
		std::cout << "Çªµå´ö" << std::endl;
	}
}