#include "chapter3_beverage.h"

namespace chapter3 {
	Decaf::Decaf() {
		this->description_ = "디카페인 커피";
	}
	double Decaf::Cost() {
		return 1.05;
	}
}