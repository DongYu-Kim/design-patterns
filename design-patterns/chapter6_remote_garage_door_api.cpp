#include <iostream>
#include "chapter6_remote_api.h"

namespace chapter6_remote {
	GarageDoor::GarageDoor(std::string location) {
		this->location_ = location;
	}
	void GarageDoor::Up() {
		std::cout << this->location_ + " ������ ���ϴ�." << std::endl;
	}
	void GarageDoor::Down() {
		std::cout << this->location_ + " ������ �ݽ��ϴ�." << std::endl;
	}
	void GarageDoor::Stop() {
		std::cout << this->location_ + " ������ ����ϴ�." << std::endl;
	}
	void GarageDoor::LightOn() {
		std::cout << this->location_ + " ���� ���� �մϴ�." << std::endl;
	}
	void GarageDoor::LightOff() {
		std::cout << this->location_ + " ���� ���� ���ϴ�." << std::endl;
	}
}