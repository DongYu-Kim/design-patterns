#pragma once
#include "chapter4_simple_factory_pizza_factory.h"

namespace chapter4_simple_factory {
	class PizzaStore {
	private:
		SimplePizzaFactory* factory_;
	public:
		PizzaStore(SimplePizzaFactory* factory);
		~PizzaStore();
		Pizza* OrderPizza(std::string type);
	};
}