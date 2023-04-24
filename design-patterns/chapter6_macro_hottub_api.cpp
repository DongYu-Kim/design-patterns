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
		if(this->on_) std::cout << "온수 욕조 거품기를 켭니다." << std::endl;
	}
	void Hottub::JetsOn() {
		if (this->on_) std::cout << "온수 욕조 제트를 켭니다." << std::endl;
	}
	void Hottub::JetsOff() {
		if (this->on_) std::cout << "온수 욕조 제트를 끕니다." << std::endl;
	}
	void Hottub::SetTemperature(int temperature) {
		if (temperature > this->temperature_) {
			std::cout << "온수 욕조를 김이 나는 " + std::to_string(temperature) + "도까지 가열합니다." << std::endl;
		}
		else {
			std::cout << "온수 욕조를 " + std::to_string(temperature) + "도까지 냉각합니다." << std::endl;
		}
		this->temperature_ = temperature;
	}
}