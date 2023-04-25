#include <iostream>
#include "chapter8_beverage.h"

namespace chapter8 {
	void CoffeeWithHook::Brew() {
		std::cout << "���Ϳ� Ŀ�Ǹ� �帳�մϴ�." << std::endl;
	}
	void CoffeeWithHook::AddCondiments() {
		std::cout << "������ ������ �߰��մϴ�." << std::endl;
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
		std::cout << "Ŀ�ǿ� ������ ���� �߰��Ͻðڽ��ϱ�? (y/n)" << std::endl;
		std::cin >> answer;
		return answer;
	}
}