#include "chapter4_simple_factory_pizza.h"

namespace chapter4_simple_factory {
	ClamPizza::ClamPizza() {
		this->name_ = "조개 피자";
		this->dough_ = "씬 크러스트";
		this->sauce_ = "화이트 갈릭 소스";
		this->toppings_.push_back("조개");
		this->toppings_.push_back("파마산 치즈 가루");
	}
}