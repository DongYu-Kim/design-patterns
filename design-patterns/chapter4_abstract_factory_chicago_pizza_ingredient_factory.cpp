#include "chapter4_abstract_factory_pizza_ingredient_factory.h"
#include "chapter4_abstract_factory_pizza_ingredient.h"

namespace chapter4_abstract_factory {
	Dough* ChicagoPizzaIngredientFactory::CreateDough() {
		return new ThickCrustDough();
	}
	Sauce* ChicagoPizzaIngredientFactory::CreateSauce() {
		return new PlumTomatoSauce();
	}
	Cheese* ChicagoPizzaIngredientFactory::CreateCheese() {
		return new MozzarellaCheese();
	}
	std::vector<Veggies*> ChicagoPizzaIngredientFactory::CreateVeggies() {
		return std::vector<Veggies*>({
			new BlackOlives(), new Spinach(), new Eggplant()
		});
	}
	Pepperoni* ChicagoPizzaIngredientFactory::CreatePepperoni() {
		return new SlicedPepperoni();
	}
	Clams* ChicagoPizzaIngredientFactory::CreateClam() {
		return new FrozenClams();
	}
}