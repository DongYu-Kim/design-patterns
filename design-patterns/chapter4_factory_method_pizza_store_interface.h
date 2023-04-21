#pragma once
#include "chapter4_factory_method_pizza.h"

namespace chapter4_factory_method {
	class PizzaStore {
	public:
		virtual Pizza* CreatePizza(std::string type) = 0;
		Pizza* OrderPizza(std::string type);
	};
}