#include "chapter4_abstract_factory_pizza_store.h"
#include "chapter4_abstract_factory_pizza.h"
#include "chapter4_abstract_factory_pizza_ingredient_factory.h"

namespace chapter4_abstract_factory {
	Pizza* NYPizzaStore::CreatePizza(std::string type) {
		Pizza* pizza = nullptr;
		PizzaIngredientFactory* pizza_ingredient_factory = new NYPizzaIngredientFactory();
		if (type == "cheese") {
			pizza = new CheesePizza(pizza_ingredient_factory);
			pizza->SetName("뉴욕 스타일 치즈 피자");
		}
		else if (type == "clam") {
			pizza = new ClamPizza(pizza_ingredient_factory);
			pizza->SetName("뉴욕 스타일 조개 피자");
		}
		else if (type == "pepperoni") {
			pizza = new PepperoniPizza(pizza_ingredient_factory);
			pizza->SetName("뉴욕 스타일 페페로니 피자");
		}
		else if (type == "veggie") {
			pizza = new VeggiePizza(pizza_ingredient_factory);
			pizza->SetName("뉴욕 스타일 야채 피자");
		}
		return pizza;
	}
}