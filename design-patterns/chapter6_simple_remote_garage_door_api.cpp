#include <iostream>
#include "chapter6_simple_remote_api.h"

namespace chapter6_simple_remote {
	void GarageDoor::Up() {
		std::cout << "���� ���� ���ϴ�." << std::endl;
	}
	void GarageDoor::Down() {
		std::cout << "���� ���� �ݽ��ϴ�." << std::endl;
	}
	void GarageDoor::Stop() {
		std::cout << "���� ���� ����ϴ�." << std::endl;
	}
	void GarageDoor::LightOn() {
		std::cout << "���� ���� �մϴ�." << std::endl;
	}
	void GarageDoor::LightOff() {
		std::cout << "���� ���� ���ϴ�." << std::endl;
	}
}