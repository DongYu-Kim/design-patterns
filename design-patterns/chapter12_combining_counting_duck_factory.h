#pragma once
#include "chapter12_combining_abstract_duck_factory.h"

namespace chapter12_combining {
	class CountingDuckFactory : public AbstractDuckFactory {
	public:
		virtual Quackable* CreateMallardDuck() override;
		virtual Quackable* CreateRedHeadDuck() override;
		virtual Quackable* CreateDuckCall() override;
		virtual Quackable* CreateRubberDuck() override;
	};
}