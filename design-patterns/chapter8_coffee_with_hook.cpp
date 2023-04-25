#include <iostream>
#include "chapter8_beverage.h"

namespace chapter8 {
	void CoffeeWithHook::Brew() {
		std::cout << "필터에 커피를 드립합니다." << std::endl;
	}
	void CoffeeWithHook::AddCondiments() {
		std::cout << "설탕과 우유를 추가합니다." << std::endl;
	}
	bool CoffeeWithHook::CustomerWantsCondiments() {
		std::string answer = this->GetUserInput();
		if (answer == "y") return true;
		if (answer == "n") return false;
		return this->CustomerWantsCondiments();
	}
	std::string CoffeeWithHook::GetUserInput() {
		std::string answer;
		std::cin.clear();
		std::cout << "커피에 우유와 설탕 추가하시겠습니까? (y/n)" << std::endl;
		std::cin >> answer;
		return answer;
	}
}