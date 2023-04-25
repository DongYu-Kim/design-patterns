#include <iostream>
#include "chapter7_facade_system.h"

namespace chapter7_facade {
	PopcornPopper::PopcornPopper(std::string description) {
		this->description_ = description;
	}
	void PopcornPopper::On() {
		std::cout << this->description_ + "을(를) 켭니다." << std::endl;
	}
	void PopcornPopper::Off() {
		std::cout << this->description_ + "을(를) 끕니다." << std::endl;
	}
	void PopcornPopper::Pop() {
		std::cout << this->description_ + "이(가) 팝콘을 튀깁니다." << std::endl;
	}
	std::string PopcornPopper::ToString() {
		return this->description_;
	}
}