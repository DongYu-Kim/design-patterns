#pragma once

namespace chapter7_object_adapter {
	class Duck {
	public:
		virtual void Quack() = 0;
		virtual void Fly() = 0;
	};
}