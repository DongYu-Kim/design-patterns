#include <iostream>
#include "chapter6_remote_api.h"

namespace chapter6_remote {
	TV::TV(std::string location) {
		this->location_ = location;
	}
	void TV::On() {
		std::cout << "TV�� �Ѵ�." << std::endl;
	}
	void TV::Off() {
		std::cout << "TV�� ����." << std::endl;
	}
	void TV::SetInputChannel() {
		this->channel_ = 3;
		std::cout << "ä���� VCR������ �����Ǿ����ϴ�." << std::endl;
	}
}