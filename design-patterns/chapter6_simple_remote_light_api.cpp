#include <iostream>
#include "chapter6_simple_remote_api.h"

namespace chapter6_simple_remote {
	void Light::On() {
		std::cout << "���� �մϴ�." << std::endl;
	}
	void Light::Off() {
		std::cout << "���� ���ϴ�." << std::endl;
	}
}