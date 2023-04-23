#include <iostream>
#include "chapter6_simple_remote_api.h"

namespace chapter6_simple_remote {
	void GarageDoor::Up() {
		std::cout << "차고 문을 엽니다." << std::endl;
	}
	void GarageDoor::Down() {
		std::cout << "차고 문을 닫습니다." << std::endl;
	}
	void GarageDoor::Stop() {
		std::cout << "차고 문을 멈춥니다." << std::endl;
	}
	void GarageDoor::LightOn() {
		std::cout << "차고 불을 켭니다." << std::endl;
	}
	void GarageDoor::LightOff() {
		std::cout << "차고 불을 끕니다." << std::endl;
	}
}