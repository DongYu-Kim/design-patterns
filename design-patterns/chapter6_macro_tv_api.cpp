#include <iostream>
#include "chapter6_macro_api.h"

namespace chapter6_macro {
	TV::TV(std::string location) {
		this->location_ = location;
	}
	void TV::On() {
		std::cout << "TV�� �մϴ�." << std::endl;
	}
	void TV::Off() {
		std::cout << "TV�� ���ϴ�." << std::endl;
	}
	void TV::SetInputChannel() {
		this->channel_ = 3;
		std::cout << "ä���� VCR������ �����Ǿ����ϴ�." << std::endl;
	}
}