#include "chapter4_factory_method_pizza_store.h"
#include "chapter4_factory_method_ny_style_pizza.h"

namespace chapter4_factory_method {
	Pizza* NYPizzaStore::CreatePizza(std::string type) {
		if (type == "cheese") return new NYStyleCheesePizza();
		if (type == "clam") return new NYStyleClamPizza();
		if (type == "pepperoni") return new NYStylePepperoniPizza();
		if (type == "veggie") return new NYStyleVeggiePizza();
		return nullptr;
	}
}