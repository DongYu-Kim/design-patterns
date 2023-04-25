#pragma once
#include "chapter7_object_adapter_duck_interface.h"

namespace chapter7_object_adapter {
	class MallardDuck : public Duck {
		virtual void Quack() override;
		virtual void Fly() override;
	};
}