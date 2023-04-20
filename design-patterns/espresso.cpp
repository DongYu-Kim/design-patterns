#include "chapter3_beverage.h"

namespace chapter3 {
	Espresso::Espresso() {
		this->description_ = "에스프레소";
	}
	double Espresso::Cost() {
		return 1.99;
	}
}