#pragma once
#include "chapter3_beverage_decorator_interface.h"

namespace chapter3 {
	class Milk : public CondimentDecorator {
	public:
		Milk(Beverage* beverage);
		virtual std::string GetDescription() override;
		virtual double Cost() override;
	};

	class Mocha : public CondimentDecorator {
	public:
		Mocha(Beverage* beverage);
		virtual std::string GetDescription() override;
		virtual double Cost() override;
	};

	class Soy : public CondimentDecorator {
	public:
		Soy(Beverage* beverage);
		virtual std::string GetDescription() override;
		virtual double Cost() override;
	};

	class Whip : public CondimentDecorator {
	public:
		Whip(Beverage* beverage);
		virtual std::string GetDescription() override;
		virtual double Cost() override;
	};
}