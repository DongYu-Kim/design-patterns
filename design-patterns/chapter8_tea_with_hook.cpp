#include <iostream>
#include "chapter8_beverage.h"

namespace chapter8 {
	void TeaWithHook::Brew() {
		std::cout << "차를 우립니다." << std::endl;
	}
	void TeaWithHook::AddCondiments() {
		std::cout << "레몬을 추가합니다." << std::endl;
	}
	bool TeaWithHook::CustomerWantsCondiments() {
		std::string answer = this->GetUserInput();
		if (answer == "y") return true;
		if (answer == "n") return false;
		return this->CustomerWantsCondiments();
	}
	std::string TeaWithHook::GetUserInput() {
		std::string answer;
		std::cin.clear();
		std::cout << "차에 레몬을 추가하시겠습니까? (y/n)" << std::endl;
		std::cin >> answer;
		return answer;
	}
}