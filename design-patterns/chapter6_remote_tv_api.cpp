#include <iostream>
#include "chapter6_remote_api.h"

namespace chapter6_remote {
	TV::TV(std::string location) {
		this->location_ = location;
	}
	void TV::On() {
		std::cout << "TV를 켜다." << std::endl;
	}
	void TV::Off() {
		std::cout << "TV를 끄다." << std::endl;
	}
	void TV::SetInputChannel() {
		this->channel_ = 3;
		std::cout << "채널이 VCR용으로 설정되었습니다." << std::endl;
	}
}