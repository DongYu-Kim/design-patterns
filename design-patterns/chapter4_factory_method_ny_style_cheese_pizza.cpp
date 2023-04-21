#include "chapter4_factory_method_ny_style_pizza.h"

namespace chapter4_factory_method {
	NYStyleCheesePizza::NYStyleCheesePizza() {
		this->name_ = "뉴욕 스타일 소스 치즈 피자";
		this->dough_ = "씬 크러스트 도우";
		this->sauce_ = "마리나라 소스";
		this->toppings_.push_back("레지아노 치즈");
	}
}