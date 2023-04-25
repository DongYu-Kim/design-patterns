#include <iostream>
#include "chapter8_beverage.h"

namespace chapter8 {
	void TeaWithHook::Brew() {
		std::cout << "���� �츳�ϴ�." << std::endl;
	}
	void TeaWithHook::AddCondiments() {
		std::cout << "������ �߰��մϴ�." << std::endl;
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
		std::cout << "���� ������ �߰��Ͻðڽ��ϱ�? (y/n)" << std::endl;
		std::cin >> answer;
		return answer;
	}
}