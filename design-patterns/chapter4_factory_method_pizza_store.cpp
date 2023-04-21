#include <iostream>
#include "chapter4_factory_method_pizza_store_interface.h"

namespace chapter4_factory_method {
	Pizza* PizzaStore::OrderPizza(std::string type) {
		Pizza* pizza = this->CreatePizza(type);
		std::cout << "--- " << pizza->GetName() + " ����� �� ---" << std::endl;
		pizza->Prepare();
		pizza->Bake();
		pizza->Cut();
		pizza->Box();
		return pizza;
	}
}