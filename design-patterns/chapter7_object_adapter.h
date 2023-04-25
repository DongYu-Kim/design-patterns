#pragma once
#include "chapter7_object_adapter_duck_interface.h"
#include "chapter7_object_adapter_turkey_interface.h"

namespace chapter7_object_adapter {
	class DuckAdapter : public Turkey {
	private:
		Duck* duck_ = nullptr;
	public:
		DuckAdapter(Duck* duck);
		virtual void Gobble() override;
		virtual void Fly() override;
	};

	class TurkeyAdapter : public Duck {
	private:
		Turkey* turkey_ = nullptr;
	public:
		TurkeyAdapter(Turkey* turkey);
		virtual void Quack() override;
		virtual void Fly() override;
	};
}