#pragma once
#include "chapter4_abstract_factory_pizza_interface.h"

namespace chapter4_abstract_factory {
	class PizzaStore {
	protected:
		virtual Pizza* CreatePizza(std::string type) = 0;
	public:
		Pizza* OrderPizza(std::string type);
	};
}