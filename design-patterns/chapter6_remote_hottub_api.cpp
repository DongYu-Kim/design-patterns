#include <iostream>
#include "chapter6_remote_api.h"

namespace chapter6_remote {
	void Hottub::On() {
		this->on_ = true;
	}
	void Hottub::Off() {
		this->on_ = false;
	}
	void Hottub::BubblesOn() {
		if (this->on_) std::cout << "�¼� ���� ��ǰ�⸦ �մϴ�." << std::endl;
	}
	void Hottub::BubblesOff() {
		if (this->on_) std::cout << "�¼� ���� ��ǰ�⸦ ���ϴ�." << std::endl;
	}
	void Hottub::JetsOn() {
		if (this->on_) std::cout << "�¼� ���� ��Ʈ�� �մϴ�." << std::endl;
	}
	void Hottub::JetsOff() {
		if (this->on_) std::cout << "�¼� ���� ��Ʈ�� ���ϴ�." << std::endl;
	}
	void Hottub::SetTemperature(int temperature) {
		this->temperature_ = temperature;
	}
	void Hottub::Heat() {
		this->temperature_ = 105;
		std::cout << "�¼� ������ ���� ���� 105������ �����մϴ�." << std::endl;
	}
	void Hottub::Cool() {
		this->temperature_ = 98;
		std::cout << "�¼� ������ 98������ �ð��մϴ�." << std::endl;
	}
}