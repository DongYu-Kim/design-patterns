#include <iostream>
#include "chapter6_remote_api.h"

namespace chapter6_remote {
	CeilingFan::CeilingFan(std::string location) {
		this->location_ = location;
		this->level_ = kOff;
	}
	void CeilingFan::High() {
		this->level_ = kHigh;
		std::cout << this->location_ + " õ�� ȯǳ�⸦ ������ �մϴ�." << std::endl;
	}
	void CeilingFan::Medium() {
		this->level_ = kMedium;
		std::cout << this->location_ + " õ�� ȯǳ�⸦ �߰����� �մϴ�." << std::endl;
	}
	void CeilingFan::Low() {
		this->level_ = kLow;
		std::cout << this->location_ + " õ�� ȯǳ�⸦ ������ �մϴ�." << std::endl;
	}
	void CeilingFan::Off() {
		this->level_ = kOff;
		std::cout << this->location_ + " õ�� ȯǳ�⸦ ���ϴ�." << std::endl;
	}
	int CeilingFan::GetSpeed() {
		return this->level_;
	}
}