#pragma once
#include <string>
#include <list>

namespace chapter4_simple_factory {
	class Pizza {
	protected:
		std::string name_;
		std::string dough_;
		std::string sauce_;
		std::list<std::string> toppings_;
	public:
		std::string GetName();
		void Prepare();
		void Bake();
		void Cut();
		void Box();
		std::string ToString();
	};

	class CheesePizza : public Pizza {
	public:
		CheesePizza();
	};

	class VeggiePizza : public Pizza {
	public:
		VeggiePizza();
	};

	class ClamPizza : public Pizza {
	public:
		ClamPizza();
	};

	class PepperoniPizza : public Pizza {
	public:
		PepperoniPizza();
	};
}