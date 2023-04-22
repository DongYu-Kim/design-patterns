#include <iostream>
#include "chapter4_abstract_factory_pizza.h"

namespace chapter4_abstract_factory {
	VeggiePizza::VeggiePizza(PizzaIngredientFactory* pizza_ingredient_factory) {
		this->pizza_ingredient_factory_ = pizza_ingredient_factory;
	}
	void VeggiePizza::Prepare() {
		std::cout << this->GetName() << " ÁØºñ Áß" << std::endl;
		this->dough_ = this->pizza_ingredient_factory_->CreateDough();
		this->sauce_ = this->pizza_ingredient_factory_->CreateSauce();
		this->cheese_ = this->pizza_ingredient_factory_->CreateCheese();
		this->veggies_ = this->pizza_ingredient_factory_->CreateVeggies();
	}
}