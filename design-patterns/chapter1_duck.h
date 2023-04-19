#pragma once
#include "chapter1_duck_interface.h"

namespace chapter1 {
	class MallardDuck : public Duck {
	public:
		MallardDuck();
		virtual void Display() override;
	};

	class RedheadDuck : public Duck {
	public:
		RedheadDuck();
		virtual void Display() override;
	};

	class RubberDuck : public Duck {
	public:
		RubberDuck();
		virtual void Display() override;
	};

	class DecoyDuck : public Duck {
	public:
		DecoyDuck();
		virtual void Display() override;
	};
}