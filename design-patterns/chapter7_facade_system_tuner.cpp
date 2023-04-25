#include <iostream>
#include "chapter7_facade_system.h"

namespace chapter7_facade {
	Tuner::Tuner(std::string description, Amplifier* amplifier) {
		this->description_ = description;
		this->amplifier_ = amplifier;
	}
	void Tuner::On() {
		std::cout << this->description_ + "을(를) 켭니다." << std::endl;
	}
	void Tuner::Off() {
		std::cout << this->description_ + "을(를) 끕니다." << std::endl;
	}
	void Tuner::SetFrequency(double frequency) {
		this->frequency_ = frequency;
		std::cout << this->description_ + "을(를) " + std::to_string(this->frequency_) + " 주파수로 설정합니다." << std::endl;
	}
	void Tuner::SetAm() {
		std::cout << this->description_ + "을(를) AM 모드로 설정합니다." << std::endl;
	}
	void Tuner::SetFm() {
		std::cout << this->description_ + "을(를) FM 모드로 설정합니다." << std::endl;
	}
	std::string Tuner::ToString() {
		return this->description_;
	}
}