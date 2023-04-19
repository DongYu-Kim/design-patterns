#pragma once

namespace chapter1_duck {
	class FlyBehavior {
	public:
		virtual void PerformFly() {}
	};
	class QuackBehavior {
	public:
		virtual void PerformQuack() {}
	};
}
