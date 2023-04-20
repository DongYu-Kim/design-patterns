#include "chapter3_beverage_decorator.h"

namespace chapter3 {
	Milk::Milk(Beverage* beverage) {
		this->beverage_ = beverage;
	}
	std::string Milk::GetDescription() {
		return this->beverage_->GetDescription() + ", ¿ìÀ¯";
	}
	double Milk::Cost() {
		return this->beverage_->Cost() + 0.10;
	}
}