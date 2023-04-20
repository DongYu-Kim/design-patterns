#include "chapter4_simple_factory_pizza.h"

namespace chapter4_simple_factory {
	CheesePizza::CheesePizza() {
		this->name_ = "치즈 피자";
		this->dough_ = "레귤러 크러스트";
		this->sauce_ = "마리나라 피자 소스";
		this->toppings_.push_back("신선한 모짜렐라 치즈");
		this->toppings_.push_back("파마산 치즈");
	}
}