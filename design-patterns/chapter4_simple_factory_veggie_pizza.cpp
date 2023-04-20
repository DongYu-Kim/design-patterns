#include "chapter4_simple_factory_pizza.h"

namespace chapter4_simple_factory {
	VeggiePizza::VeggiePizza() {
		this->name_ = "야채 피자";
		this->dough_ = "크러스트";
		this->sauce_ = "마리나라 소스";
		this->toppings_.push_back("모짤렐라 치즈");
		this->toppings_.push_back("파마산 치즈 가루");
		this->toppings_.push_back("다진 양파");
		this->toppings_.push_back("버섯 슬라이스");
		this->toppings_.push_back("고추 슬라이스");
		this->toppings_.push_back("블랙 올리브 슬라이스");
	}
}