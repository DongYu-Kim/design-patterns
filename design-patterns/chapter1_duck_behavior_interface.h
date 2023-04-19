#pragma once

namespace chapter1 {
	class FlyBehavior {
	public:
		virtual void PerformFly() = 0;
	};
	class QuackBehavior {
	public:
		virtual void PerformQuack() = 0;
	};
}
