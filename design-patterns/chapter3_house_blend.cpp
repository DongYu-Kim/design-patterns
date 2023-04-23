#include "chapter3_beverage.h"

namespace chapter3 {
	HouseBlend::HouseBlend() {
		this->description_ = "하우스 블렌드 커피";
	}
	double HouseBlend::Cost() {
		return 0.89;
	}
}