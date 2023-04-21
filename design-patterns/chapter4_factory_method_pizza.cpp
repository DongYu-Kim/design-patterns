#include <iostream>
#include "chapter4_factory_method_pizza.h"

namespace chapter4_factory_method {
	void Pizza::Prepare() {
		std::cout << this->name_ << " 준비 중..." << std::endl;
		std::cout << "도우 돌리는 중..." << std::endl;
		std::cout << "소스 첨가 중..." << std::endl;
		for (const std::string topping : this->toppings_) {
			std::cout << topping << "  ";
		}
		std::cout << "토핑 첨가 중..." << std::endl;
	}
	void Pizza::Bake() {
		std::cout << "350도에서 25분간 굽기" << std::endl;
	}
	void Pizza::Cut() {
		std::cout << "대각선으로 피자 자르기" << std::endl;
	}
	void Pizza::Box() {
		std::cout << "피자가게 상자에 피자 담기" << std::endl;
	}
	std::string Pizza::GetName() {
		return this->name_;
	}
	std::string Pizza::ToString() {
		std::string display = "---- " + this->name_ + " ----\n";
		display += this->dough_ + "\n";
		display += this->sauce_ + "\n";
		for (const std::string& topping : this->toppings_) {
			display += topping + "\n";
		}
		return display;
	}
}