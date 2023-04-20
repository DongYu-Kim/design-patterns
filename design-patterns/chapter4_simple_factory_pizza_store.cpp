#include "chapter4_simple_factory_pizza_store.h"

namespace chapter4_simple_factory {
	PizzaStore::PizzaStore(SimplePizzaFactory* factory) {
		this->factory_ = factory;
	}
	PizzaStore::~PizzaStore() {
		if (this->factory_) delete this->factory_;
	}
	Pizza* PizzaStore::OrderPizza(std::string type) {
		Pizza* pizza = this->factory_->CreatePizza(type);
		pizza->Prepare();
		pizza->Bake();
		pizza->Cut();
		pizza->Box();
		return pizza;
	}
}