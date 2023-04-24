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
		if (this->on_) std::cout << "온수 욕조 거품기를 켭니다." << std::endl;
	}
	void Hottub::BubblesOff() {
		if (this->on_) std::cout << "온수 욕조 거품기를 끕니다." << std::endl;
	}
	void Hottub::JetsOn() {
		if (this->on_) std::cout << "온수 욕조 제트를 켭니다." << std::endl;
	}
	void Hottub::JetsOff() {
		if (this->on_) std::cout << "온수 욕조 제트를 끕니다." << std::endl;
	}
	void Hottub::SetTemperature(int temperature) {
		this->temperature_ = temperature;
	}
	void Hottub::Heat() {
		this->temperature_ = 105;
		std::cout << "온수 욕조를 김이 나는 105도까지 가열합니다." << std::endl;
	}
	void Hottub::Cool() {
		this->temperature_ = 98;
		std::cout << "온수 욕조를 98도까지 냉각합니다." << std::endl;
	}
}