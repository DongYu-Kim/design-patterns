#pragma once
#include "chapter12_combining_quack_observable_interface.h"

namespace chapter12_combining {
	class Quackable : public QuackObservable {
	public:
		virtual void Quack() = 0;
	};
}