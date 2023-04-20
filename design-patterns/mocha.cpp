#include "chapter3_beverage_decorator.h"

namespace chapter3 {
	Mocha::Mocha(Beverage* beverage) {
		this->beverage_ = beverage;
	}
	std::string Mocha::GetDescription() {
		return this->beverage_->GetDescription() + ", ¸ðÄ«";
	}
	double Mocha::Cost() {
		return this->beverage_->Cost() + 0.20;
	}
}