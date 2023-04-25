#include <iostream>
#include "chapter8_beverage.h"

namespace chapter8 {
	void Coffee::Brew() {
		std::cout << "필터에 커피를 드립합니다." << std::endl;
	}
	void Coffee::AddCondiments() {
		std::cout << "설탕과 우유를 추가합니다." << std::endl;
	}
}