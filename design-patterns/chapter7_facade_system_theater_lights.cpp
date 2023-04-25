#include <iostream>
#include "chapter7_facade_system.h"

namespace chapter7_facade {
	TheaterLights::TheaterLights(std::string description) {
		this->description_ = description;
	}
	void TheaterLights::On() {
		std::cout << this->description_ + "��(��) �մϴ�." << std::endl;
	}
	void TheaterLights::Off() {
		std::cout << this->description_ + "��(��) ���ϴ�." << std::endl;
	}
	void TheaterLights::Dim(int level) {
		std::cout << this->description_ + "��(��) " + std::to_string(level) + "% �������� ��Ӱ� �մϴ�." << std::endl;
	}
	std::string TheaterLights::ToString() {
		return this->description_;
	}
}