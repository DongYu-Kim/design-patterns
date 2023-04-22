#pragma once
#include <string>
#include <vector>
#include "chapter4_abstract_factory_pizza_ingredient_factory_interface.h"
#include "chapter4_abstract_factory_pizza_ingredient.h"

namespace chapter4_abstract_factory {
	class Pizza {
	private:
		std::string name_;
	protected:
		PizzaIngredientFactory* pizza_ingredient_factory_ = nullptr;
		Dough* dough_ = nullptr;
		Sauce* sauce_ = nullptr;
		std::vector<Veggies*> veggies_;
		Cheese* cheese_ = nullptr;
		Pepperoni* pepperoni_ = nullptr;
		Clams* clam_ = nullptr;
	public:
		~Pizza();
		virtual void Prepare() = 0;
		void Bake();
		void Cut();
		void Box();
		std::string GetName();
		void SetName(std::string name);
		std::string ToString();
	};
}