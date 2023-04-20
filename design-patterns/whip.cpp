#include "chapter3_beverage_decorator.h"

namespace chapter3 {
	Whip::Whip(Beverage* beverage) {
		this->beverage_ = beverage;
	}
	std::string Whip::GetDescription() {
		return this->beverage_->GetDescription() + ", ÈÖÇÎÅ©¸²";
	}
	double Whip::Cost() {
		return this->beverage_->Cost() + 0.10;
	}
}