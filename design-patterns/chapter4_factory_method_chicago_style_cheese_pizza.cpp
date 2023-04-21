#include "chapter4_factory_method_chicaco_style_pizza.h"

namespace chapter4_factory_method {
	ChicagoStyleCheesePizza::ChicagoStyleCheesePizza() {
		this->name_ = "시카고 스타일 딥 디쉬 치즈 피자";
		this->dough_ = "매우 두꺼운 크러스트 도우";
		this->sauce_ = "대추 토마토 소스";
		this->toppings_.push_back("모짜렐라 치즈");
	}
}