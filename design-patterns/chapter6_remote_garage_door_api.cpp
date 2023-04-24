#include <iostream>
#include "chapter6_remote_api.h"

namespace chapter6_remote {
	GarageDoor::GarageDoor(std::string location) {
		this->location_ = location;
	}
	void GarageDoor::Up() {
		std::cout << this->location_ + " 차고문을 엽니다." << std::endl;
	}
	void GarageDoor::Down() {
		std::cout << this->location_ + " 차고문을 닫습니다." << std::endl;
	}
	void GarageDoor::Stop() {
		std::cout << this->location_ + " 차고문을 멈춥니다." << std::endl;
	}
	void GarageDoor::LightOn() {
		std::cout << this->location_ + " 차고 불을 켭니다." << std::endl;
	}
	void GarageDoor::LightOff() {
		std::cout << this->location_ + " 차고 불을 끕니다." << std::endl;
	}
}