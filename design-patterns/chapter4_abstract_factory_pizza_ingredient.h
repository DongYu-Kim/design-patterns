#pragma once
#include "chapter4_abstract_factory_pizza_ingredient_interface.h"

namespace chapter4_abstract_factory {
	class ThickCrustDough : public Dough {
	public:
		virtual std::string ToString() override;
	};
	class ThinCrustDough : public Dough {
	public:
		virtual std::string ToString() override;
	};

	class MarinaraSauce : public Sauce {
	public:
		virtual std::string ToString() override;
	};
	class PlumTomatoSauce : public Sauce {
	public:
		virtual std::string ToString() override;
	};

	class MozzarellaCheese : public Cheese {
	public:
		virtual std::string ToString() override;
	};
	class ParmesanCheese : public Cheese {
	public:
		virtual std::string ToString() override;
	};
	class ReggianoCheese : public Cheese {
	public:
		virtual std::string ToString() override;
	};

	class BlackOlives : public Veggies {
	public:
		virtual std::string ToString() override;
	};
	class Eggplant : public Veggies {
	public:
		virtual std::string ToString() override;
	};
	class Garlic : public Veggies {
	public:
		virtual std::string ToString() override;
	};
	class Mushroom : public Veggies {
	public:
		virtual std::string ToString() override;
	};
	class Onion : public Veggies {
	public:
		virtual std::string ToString() override;
	};
	class RedPepper : public Veggies {
	public:
		virtual std::string ToString() override;
	};
	class Spinach : public Veggies {
	public:
		virtual std::string ToString() override;
	};

	class SlicedPepperoni : public Pepperoni {
	public:
		virtual std::string ToString() override;
	};

	class FreshClams : public Clams {
	public:
		virtual std::string ToString() override;
	};
	class FrozenClams : public Clams {
	public:
		virtual std::string ToString() override;
	};
}