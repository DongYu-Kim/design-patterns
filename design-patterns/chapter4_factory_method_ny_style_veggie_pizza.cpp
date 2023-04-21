#include "chapter4_factory_method_ny_style_pizza.h"

namespace chapter4_factory_method {
	NYStyleVeggiePizza::NYStyleVeggiePizza() {
		this->name_ = "뉴욕 스타일 야채 피자";
		this->dough_ = "씬 크러스트 도우";
		this->sauce_ = "마리나라 소스";
		this->toppings_.push_back("레지아노 치즈");
		this->toppings_.push_back("마늘");
		this->toppings_.push_back("양파");
		this->toppings_.push_back("버섯");
		this->toppings_.push_back("고추");
	}
}