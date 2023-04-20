#include "chapter3_beverage.h"

namespace chapter3 {
	DarkRoast::DarkRoast() {
		this->description_ = "다크 로스트 커피";
	}
	double DarkRoast::Cost() {
		return 0.99;
	}
}