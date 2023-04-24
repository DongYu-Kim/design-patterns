#include <iostream>
#include "chapter6_remote_api.h"

namespace chapter6_remote {
	CeilingFan::CeilingFan(std::string location) {
		this->location_ = location;
		this->level_ = kOff;
	}
	void CeilingFan::High() {
		this->level_ = kHigh;
		std::cout << this->location_ + " 천장 환풍기를 강으로 켭니다." << std::endl;
	}
	void CeilingFan::Medium() {
		this->level_ = kMedium;
		std::cout << this->location_ + " 천장 환풍기를 중간으로 켭니다." << std::endl;
	}
	void CeilingFan::Low() {
		this->level_ = kLow;
		std::cout << this->location_ + " 천장 환풍기를 약으로 켭니다." << std::endl;
	}
	void CeilingFan::Off() {
		this->level_ = kOff;
		std::cout << this->location_ + " 천장 환풍기를 끕니다." << std::endl;
	}
	int CeilingFan::GetSpeed() {
		return this->level_;
	}
}