#pragma once
#include "chapter7_class_adapter_duck_interface.h"

namespace chapter7_class_adapter {
	class MallardDuck : public Duck {
	public:
		virtual void Quack() override;
		virtual void Fly() override;
	};
}