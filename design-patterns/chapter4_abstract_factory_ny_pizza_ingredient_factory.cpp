#include "chapter4_abstract_factory_pizza_ingredient_factory.h"
#include "chapter4_abstract_factory_pizza_ingredient.h"

namespace chapter4_abstract_factory {
	Dough* NYPizzaIngredientFactory::CreateDough() {
		return new ThinCrustDough();
	}
	Sauce* NYPizzaIngredientFactory::CreateSauce() {
		return new MarinaraSauce();
	}
	Cheese* NYPizzaIngredientFactory::CreateCheese() {
		return new ReggianoCheese();
	}
	std::vector<Veggies*> NYPizzaIngredientFactory::CreateVeggies() {
		return std::vector<Veggies*>({
			new Garlic(), new Onion(), new Mushroom(), new RedPepper()
		});
	}
	Pepperoni* NYPizzaIngredientFactory::CreatePepperoni() {
		return new SlicedPepperoni();
	}
	Clams* NYPizzaIngredientFactory::CreateClam() {
		return new FreshClams();
	}
}