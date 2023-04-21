#include "chapter4_factory_method_pizza_store.h"
#include "chapter4_factory_method_chicaco_style_pizza.h"

namespace chapter4_factory_method {
	Pizza* ChicagoPizzaStore::CreatePizza(std::string type) {
		if (type == "cheese") return new ChicagoStyleCheesePizza();
		if (type == "clam") return new ChicagoStyleClamPizza();
		if (type == "pepperoni") return new ChicagoStylePepperoniPizza();
		if (type == "veggie") return new ChicagoStyleVeggiePizza();
		return nullptr;
	}
}