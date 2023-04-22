#pragma once
#include <vector>
#include "chapter4_abstract_factory_pizza_ingredient_interface.h"

namespace chapter4_abstract_factory {
	class PizzaIngredientFactory {
	public:
		virtual Dough* CreateDough() = 0;
		virtual Sauce* CreateSauce() = 0;
		virtual Cheese* CreateCheese() = 0;
		virtual std::vector<Veggies*> CreateVeggies() = 0;
		virtual Pepperoni* CreatePepperoni() = 0;
		virtual Clams* CreateClam() = 0;
	};
}