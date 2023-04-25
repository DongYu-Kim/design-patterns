#pragma once
#include "chapter7_class_adapter_duck.h"
#include "chapter7_class_adapter_turkey.h"

namespace chapter7_class_adapter {
	class MallardDuckAdapter : public WildTurkey, public MallardDuck {
	private:
		virtual void Quack() override;
	public:
		virtual void Gobble() override;
		virtual void Fly() override;
	};
	
	class WildTurkeyAdapter : public MallardDuck, public WildTurkey {
	private:
		virtual void Gobble() override;
	public:
		virtual void Quack() override;
		virtual void Fly() override;
	};
}