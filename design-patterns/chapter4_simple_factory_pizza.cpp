#include <iostream>
#include "chapter4_simple_factory_pizza.h"

namespace chapter4_simple_factory {
	std::string Pizza::GetName() {
		return this->name_;
	}
	void Pizza::Prepare() {
		std::cout << this->name_ << " 준비 중" << std::endl;
	}
	void Pizza::Bake() {
		std::cout << this->name_ << " 굽는 중" << std::endl;
	}
	void Pizza::Cut() {
		std::cout << this->name_ << " 자르는 중" << std::endl;
	}
	void Pizza::Box() {
		std::cout << this->name_ << " 포장하는 중" << std::endl;
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