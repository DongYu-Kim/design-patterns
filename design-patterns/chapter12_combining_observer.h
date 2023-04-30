#pragma once
#include "chapter12_combining_observer_interface.h"

namespace chapter12_combining {
	class Quackologist : public Observer {
	public:
		virtual void Update(QuackObservable* duck) override;
		virtual std::string ToString() override;
	};
}