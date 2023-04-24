#include <iostream>
#include "chapter6_macro_api.h"

namespace chapter6_macro {
	void Hottub::On() {
		this->on_ = true;
	}
	void Hottub::Off() {
		this->on_ = false;
	}
	void Hottub::Circulate() {
		if(this->on_) std::cout << "�¼� ���� ��ǰ�⸦ �մϴ�." << std::endl;
	}
	void Hottub::JetsOn() {
		if (this->on_) std::cout << "�¼� ���� ��Ʈ�� �մϴ�." << std::endl;
	}
	void Hottub::JetsOff() {
		if (this->on_) std::cout << "�¼� ���� ��Ʈ�� ���ϴ�." << std::endl;
	}
	void Hottub::SetTemperature(int temperature) {
		if (temperature > this->temperature_) {
			std::cout << "�¼� ������ ���� ���� " + std::to_string(temperature) + "������ �����մϴ�." << std::endl;
		}
		else {
			std::cout << "�¼� ������ " + std::to_string(temperature) + "������ �ð��մϴ�." << std::endl;
		}
		this->temperature_ = temperature;
	}
}