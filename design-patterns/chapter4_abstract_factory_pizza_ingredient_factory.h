#pragma once
#include "chapter4_abstract_factory_pizza_ingredient_factory_interface.h"

namespace chapter4_abstract_factory {
	class NYPizzaIngredientFactory : public PizzaIngredientFactory {
	public:
		virtual Dough* CreateDough() override;
		virtual Sauce* CreateSauce() override;
		virtual Cheese* CreateCheese() override;
		virtual std::vector<Veggies*> CreateVeggies() override;
		virtual Pepperoni* CreatePepperoni() override;
		virtual Clams* CreateClam() override;
	};

	class ChicagoPizzaIngredientFactory : public PizzaIngredientFactory {
	public:
		virtual Dough* CreateDough() override;
		virtual Sauce* CreateSauce() override;
		virtual Cheese* CreateCheese() override;
		virtual std::vector<Veggies*> CreateVeggies() override;
		virtual Pepperoni* CreatePepperoni() override;
		virtual Clams* CreateClam() override;
	};
}