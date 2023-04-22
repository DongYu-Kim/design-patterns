#pragma once
#include "chapter4_abstract_factory_pizza_interface.h"

namespace chapter4_abstract_factory {
	class CheesePizza : public Pizza {
	public:
		CheesePizza(PizzaIngredientFactory* pizza_ingredient_factory);
		virtual void Prepare() override;
	};

	class ClamPizza : public Pizza {
	public:
		ClamPizza(PizzaIngredientFactory* pizza_ingredient_factory);
		virtual void Prepare() override;
	};

	class PepperoniPizza : public Pizza {

	public:
		PepperoniPizza(PizzaIngredientFactory* pizza_ingredient_factory);
		virtual void Prepare() override;
	};

	class VeggiePizza : public Pizza {
	public:
		VeggiePizza(PizzaIngredientFactory* pizza_ingredient_factory);
		virtual void Prepare() override;
	};
}