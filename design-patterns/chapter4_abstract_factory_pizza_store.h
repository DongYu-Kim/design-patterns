#pragma once
#include "chapter4_abstract_factory_pizza_store_interface.h"

namespace chapter4_abstract_factory {
	class NYPizzaStore : public PizzaStore {
	private:
		virtual Pizza* CreatePizza(std::string type) override;
	};

	class ChicagoPizzaStore : public PizzaStore {
	private:
		virtual Pizza* CreatePizza(std::string type) override;
	};
}