#pragma once
#include "chapter3_beverage_interface.h"

namespace chapter3 {
	class HouseBlend : public Beverage {
	public:
		HouseBlend();
		virtual double Cost() override;
	};

	class Espresso : public Beverage {
	public:
		Espresso();
		virtual double Cost() override;
	};

	class DarkRoast : public Beverage {
	public:
		DarkRoast();
		virtual double Cost() override;
	};

	class Decaf : public Beverage {
	public:
		Decaf();
		virtual double Cost() override;
	};
}