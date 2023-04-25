#include <iostream>
#include "chapter7_facade_system.h"

namespace chapter7_facade {
	Tuner::Tuner(std::string description, Amplifier* amplifier) {
		this->description_ = description;
		this->amplifier_ = amplifier;
	}
	void Tuner::On() {
		std::cout << this->description_ + "��(��) �մϴ�." << std::endl;
	}
	void Tuner::Off() {
		std::cout << this->description_ + "��(��) ���ϴ�." << std::endl;
	}
	void Tuner::SetFrequency(double frequency) {
		this->frequency_ = frequency;
		std::cout << this->description_ + "��(��) " + std::to_string(this->frequency_) + " ���ļ��� �����մϴ�." << std::endl;
	}
	void Tuner::SetAm() {
		std::cout << this->description_ + "��(��) AM ���� �����մϴ�." << std::endl;
	}
	void Tuner::SetFm() {
		std::cout << this->description_ + "��(��) FM ���� �����մϴ�." << std::endl;
	}
	std::string Tuner::ToString() {
		return this->description_;
	}
}