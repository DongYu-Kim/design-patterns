#pragma once
#include "chapter1_duck_behavior.h"

namespace chapter1 {
	class Duck {
	protected:
		FlyBehavior* fly_behavior_ = nullptr;
		QuackBehavior* quack_behavior_ = nullptr;
	public:
		~Duck();
		void Swim();
		virtual void Display() = 0;
		void PerformQuack();
		void PerformFly();
		void SetQuackBehavior(QuackBehavior* quack_behavior);
		void SetFlyBehavior(FlyBehavior* fly_behavior);
	};
}
