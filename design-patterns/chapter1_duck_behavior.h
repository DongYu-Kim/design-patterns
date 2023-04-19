#pragma once
#include "chapter1_duck_behavior_interface.h"

namespace chapter1_duck {
	class FlyWithWings : public FlyBehavior {
		void PerformFly() override;
	};
	class FlyNoWay : public FlyBehavior {
		void PerformFly() override;
	};
	class FlyRocketPowered : public FlyBehavior {
		void PerformFly() override;
	};
	class Quack : public QuackBehavior {
		void PerformQuack() override;
	};
	class Squeak : public QuackBehavior {
		void PerformQuack() override;
	};
	class MuteQuack : public QuackBehavior {
		void PerformQuack() override;
	};
}
