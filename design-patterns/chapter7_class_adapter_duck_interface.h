#pragma once

namespace chapter7_class_adapter {
	class Duck {
	public:
		virtual void Quack() = 0;
		virtual void Fly() = 0;
	};
}