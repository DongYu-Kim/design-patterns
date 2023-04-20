#include "chapter4_simple_factory_pizza_factory.h"

namespace chapter4_simple_factory {
	Pizza* SimplePizzaFactory::CreatePizza(std::string type) {
		if (type == "cheese") return new CheesePizza();
		if (type == "pepperoni") return new PepperoniPizza();
		if (type == "clam") return new ClamPizza();
		if (type == "veggie") return new VeggiePizza();
		return nullptr;
	}
}