#include <iostream>
#include "chapter8_beverage.h"

namespace chapter8 {
	void Coffee::Brew() {
		std::cout << "���Ϳ� Ŀ�Ǹ� �帳�մϴ�." << std::endl;
	}
	void Coffee::AddCondiments() {
		std::cout << "������ ������ �߰��մϴ�." << std::endl;
	}
}