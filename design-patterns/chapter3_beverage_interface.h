#pragma once
#include <string>

namespace chapter3 {
	class Beverage {
	protected:
		std::string description_ = "";
	public:
		virtual ~Beverage() = default;
		virtual std::string GetDescription() { return this->description_; }
		virtual double Cost() = 0;
	};
}
