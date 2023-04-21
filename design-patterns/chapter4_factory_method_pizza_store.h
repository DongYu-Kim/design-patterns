#pragma once
#include "chapter4_factory_method_pizza_store_interface.h"

namespace chapter4_factory_method {
	class NYPizzaStore : public PizzaStore {
	public:
		virtual Pizza* CreatePizza(std::string) override;
	};

	class ChicagoPizzaStore : public PizzaStore {
	public:
		virtual Pizza* CreatePizza(std::string) override;
	};
}