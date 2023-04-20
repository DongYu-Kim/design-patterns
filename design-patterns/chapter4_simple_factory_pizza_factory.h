#pragma once
#include <string>
#include "chapter4_simple_factory_pizza.h"

namespace chapter4_simple_factory {
	class SimplePizzaFactory {
	public:
		Pizza* CreatePizza(std::string type);
	};
}