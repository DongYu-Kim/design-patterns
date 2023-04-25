#include <iostream>
#include "chapter7_facade_system.h"

namespace chapter7_facade {
	TheaterLights::TheaterLights(std::string description) {
		this->description_ = description;
	}
	void TheaterLights::On() {
		std::cout << this->description_ + "을(를) 켭니다." << std::endl;
	}
	void TheaterLights::Off() {
		std::cout << this->description_ + "을(를) 끕니다." << std::endl;
	}
	void TheaterLights::Dim(int level) {
		std::cout << this->description_ + "을(를) " + std::to_string(level) + "% 수준으로 어둡게 합니다." << std::endl;
	}
	std::string TheaterLights::ToString() {
		return this->description_;
	}
}