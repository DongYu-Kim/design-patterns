#include <iostream>
#include "chapter6_remote_api.h"

namespace chapter6_remote {
	Light::Light(std::string location) {
		this->location_ = location;
	}
	void Light::On() {
		std::cout << this->location_ + " 불을 켭니다." << std::endl;
	}
	void Light::Off() {
		std::cout << this->location_ + " 불을 끕니다." << std::endl;
	}
}