#pragma once
#include "chapter1_duck_behavior_interface.h"

namespace chapter1 {
	class FlyWithWings : public FlyBehavior {
		virtual void PerformFly() override;
	};
	class FlyNoWay : public FlyBehavior {
		virtual void PerformFly() override;
	};
	class FlyRocketPowered : public FlyBehavior {
		virtual void PerformFly() override;
	};
	class Quack : public QuackBehavior {
		virtual void PerformQuack() override;
	};
	class Squeak : public QuackBehavior {
		virtual void PerformQuack() override;
	};
	class MuteQuack : public QuackBehavior {
		virtual void PerformQuack() override;
	};
}
