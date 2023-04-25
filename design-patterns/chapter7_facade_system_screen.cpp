#include <iostream>
#include "chapter7_facade_system.h"

namespace chapter7_facade {
	Screen::Screen(std::string description) {
		this->description_ = description;
	}
	void Screen::Up() {
		std::cout << this->description_ + "이(가) 올라갑니다." << std::endl;
	}
	void Screen::Down() {
		std::cout << this->description_ + "이(가) 내려갑니다." << std::endl;
	}
	std::string Screen::ToString() {
		return this->description_;
	}
}