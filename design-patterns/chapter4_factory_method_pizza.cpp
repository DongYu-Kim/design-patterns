#include <iostream>
#include "chapter4_factory_method_pizza.h"

namespace chapter4_factory_method {
	void Pizza::Prepare() {
		std::cout << this->name_ << " �غ� ��..." << std::endl;
		std::cout << "���� ������ ��..." << std::endl;
		std::cout << "�ҽ� ÷�� ��..." << std::endl;
		for (const std::string topping : this->toppings_) {
			std::cout << topping << "  ";
		}
		std::cout << "���� ÷�� ��..." << std::endl;
	}
	void Pizza::Bake() {
		std::cout << "350������ 25�а� ����" << std::endl;
	}
	void Pizza::Cut() {
		std::cout << "�밢������ ���� �ڸ���" << std::endl;
	}
	void Pizza::Box() {
		std::cout << "���ڰ��� ���ڿ� ���� ���" << std::endl;
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