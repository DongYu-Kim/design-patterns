#include <iostream>
#include "chapter8_beverage.h"

namespace chapter8 {
	void Tea::Brew() {
		std::cout << "���� �츳�ϴ�." << std::endl;
	}
	void Tea::AddCondiments() {
		std::cout << "������ �߰��մϴ�." << std::endl;
	}
}