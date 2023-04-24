#include <iostream>
#include "chapter6_remote_with_undo_api.h"

namespace chapter6_remote_with_undo {
	CeilingFan::CeilingFan(std::string location) {
		this->location_ = location;
		this->speed_ = kOff;
	}
	void CeilingFan::High() {
		this->speed_ = kHigh;
		std::cout << this->location_ + " õ�� ȯǳ�⸦ ������ �մϴ�." << std::endl;
	}
	void CeilingFan::Medium() {
		this->speed_ = kMedium;
		std::cout << this->location_ + " õ�� ȯǳ�⸦ �߰����� �մϴ�." << std::endl;
	}
	void CeilingFan::Low() {
		this->speed_ = kLow;
		std::cout << this->location_ + " õ�� ȯǳ�⸦ ������ �մϴ�." << std::endl;
	}
	void CeilingFan::Off() {
		this->speed_ = kOff;
		std::cout << this->location_ + " õ�� ȯǳ�⸦ ���ϴ�." << std::endl;
	}
	int CeilingFan::GetSpeed() {
		return this->speed_;
	}
}