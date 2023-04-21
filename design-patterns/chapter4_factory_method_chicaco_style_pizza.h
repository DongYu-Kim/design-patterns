#pragma once
#include "chapter4_factory_method_pizza.h"

namespace chapter4_factory_method {
	class ChicagoStyleCheesePizza : public Pizza {
	public:
		ChicagoStyleCheesePizza();
	};

	class ChicagoStyleClamPizza : public Pizza {
	public:
		ChicagoStyleClamPizza();
	};

	class ChicagoStylePepperoniPizza : public Pizza {
	public:
		ChicagoStylePepperoniPizza();
	};

	class ChicagoStyleVeggiePizza : public Pizza {
	public:
		ChicagoStyleVeggiePizza();
	};
}