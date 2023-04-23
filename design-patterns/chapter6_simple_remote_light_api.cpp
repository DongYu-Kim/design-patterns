#include <iostream>
#include "chapter6_simple_remote_api.h"

namespace chapter6_simple_remote {
	void Light::On() {
		std::cout << "ºÒÀ» ÄÕ´Ï´Ù." << std::endl;
	}
	void Light::Off() {
		std::cout << "ºÒÀ» ²ü´Ï´Ù." << std::endl;
	}
}