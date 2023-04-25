#pragma once
#include "chapter7_object_adapter_turkey_interface.h"

namespace chapter7_object_adapter {
	class WildTurkey : public Turkey {
	public:
		virtual void Gobble() override;
		virtual void Fly() override;
	};
}