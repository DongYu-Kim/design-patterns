#include <iostream>
#include "chapter6_macro_api.h"

namespace chapter6_macro {
	Stereo::Stereo(std::string location) {
		this->location_ = location;
	}
	void Stereo::On() {
		std::cout << this->location_ + " ���׷����� �մϴ�." << std::endl;
	}
	void Stereo::Off() {
		std::cout << this->location_ + " ���׷����� ���ϴ�." << std::endl;
	}
	void Stereo::SetCD() {
		std::cout << this->location_ + " ���׷����� CD �Է¿����� �����˴ϴ�." << std::endl;
	}
	void Stereo::SetDVD() {
		std::cout << this->location_ + " ���׷����� DVD �Է¿����� �����˴ϴ�." << std::endl;
	}
	void Stereo::SetRadio() {
		std::cout << this->location_ + " ���׷����� ���������� �����˴ϴ�." << std::endl;
	}
	void Stereo::SetVolume(int volume) {
		std::cout << this->location_ + " ���׷��� ������ " + std::to_string(volume) + "���� �����մϴ�." << std::endl;
	}
}