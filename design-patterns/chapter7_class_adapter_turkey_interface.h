#pragma once

namespace chapter7_class_adapter {
	class Turkey {
	public:
		virtual void Gobble() = 0;
		virtual void Fly() = 0;
	};
}