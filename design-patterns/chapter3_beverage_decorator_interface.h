#pragma once
#include "chapter3_beverage_interface.h"

namespace chapter3 {
	class CondimentDecorator : public Beverage {
	protected:
		Beverage* beverage_ = nullptr;
	public:
		virtual ~CondimentDecorator() {
			if (this->beverage_) delete this->beverage_;
		}
		virtual std::string GetDescription() override = 0;
	};
}