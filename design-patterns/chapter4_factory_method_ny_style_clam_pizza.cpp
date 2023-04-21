#include "chapter4_factory_method_ny_style_pizza.h"

namespace chapter4_factory_method {
	NYStyleClamPizza::NYStyleClamPizza() {
		this->name_ = "뉴욕 스타일 조개 피자";
		this->dough_ = "씬 크러스트 도우";
		this->sauce_ = "마리나라 소스";
		this->toppings_.push_back("레지아노 치즈");
		this->toppings_.push_back("Long Island Sound의 신선한 조개");
	}
}