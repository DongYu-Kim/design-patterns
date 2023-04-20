#include "chapter4_simple_factory_pizza.h"

namespace chapter4_simple_factory {
	PepperoniPizza::PepperoniPizza() {
		this->name_ = "페페로니 피자";
		this->dough_ = "크러스트";
		this->sauce_ = "마리나라 소스";
		this->toppings_.push_back("페페로니 슬라이스");
		this->toppings_.push_back("양파 슬라이스");
		this->toppings_.push_back("파마산 치즈 가루");
	}
}