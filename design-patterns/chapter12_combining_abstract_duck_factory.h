#pragma once
#include "chapter12_combining_quackable_interface.h"

namespace chapter12_combining {
	class AbstractDuckFactory {
	public:
		virtual Quackable* CreateMallardDuck() = 0;
		virtual Quackable* CreateRedHeadDuck() = 0;
		virtual Quackable* CreateDuckCall() = 0;
		virtual Quackable* CreateRubberDuck() = 0;
	};
}