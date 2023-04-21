#include "chapter4_factory_method_chicaco_style_pizza.h"

namespace chapter4_factory_method {
	ChicagoStyleClamPizza::ChicagoStyleClamPizza() {
		this->name_ = "시카고 스타일 조개 피자";
		this->dough_ = "매우 두꺼운 크러스트 도우";
		this->sauce_ = "대추 토마토 소스";
		this->toppings_.push_back("모짜렐라 치즈");
		this->toppings_.push_back("체서피크 만 냉동 조개");
	}
}