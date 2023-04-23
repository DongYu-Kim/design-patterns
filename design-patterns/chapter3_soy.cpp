#include "chapter3_beverage_decorator.h"

namespace chapter3 {
	Soy::Soy(Beverage* beverage) {
		this->beverage_ = beverage;
	}
	std::string Soy::GetDescription() {
		return this->beverage_->GetDescription() + ", µÎÀ¯";
	}
	double Soy::Cost() {
		return this->beverage_->Cost() + 0.15;
	}
}