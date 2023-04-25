#pragma once
#include "chapter7_class_adapter_turkey_interface.h"

namespace chapter7_class_adapter {
	class WildTurkey : public Turkey {
	public:
		virtual void Gobble() override;
		virtual void Fly() override;
	};
}