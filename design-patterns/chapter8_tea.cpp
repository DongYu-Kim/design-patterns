#include <iostream>
#include "chapter8_beverage.h"

namespace chapter8 {
	void Tea::Brew() {
		std::cout << "차를 우립니다." << std::endl;
	}
	void Tea::AddCondiments() {
		std::cout << "레몬을 추가합니다." << std::endl;
	}
}