#include "chapter3_beverage.h"

namespace chapter3 {
	Espresso::Espresso() {
		this->description_ = "����������";
	}
	double Espresso::Cost() {
		return 1.99;
	}
}