#pragma once
#include "chapter4_factory_method_pizza.h"

namespace chapter4_factory_method {
	class NYStyleCheesePizza : public Pizza {
	public:
		NYStyleCheesePizza();
	};

	class NYStyleClamPizza : public Pizza {
	public:
		NYStyleClamPizza();
	};

	class NYStylePepperoniPizza : public Pizza {
	public:
		NYStylePepperoniPizza();
	};

	class NYStyleVeggiePizza : public Pizza {
	public:
		NYStyleVeggiePizza();
	};
}