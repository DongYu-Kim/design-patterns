#include <iostream>
#include "chapter6_remote_with_undo_api.h"

namespace chapter6_remote_with_undo {
	CeilingFan::CeilingFan(std::string location) {
		this->location_ = location;
		this->speed_ = kOff;
	}
	void CeilingFan::High() {
		this->speed_ = kHigh;
		std::cout << this->location_ + " 천장 환풍기를 강으로 켭니다." << std::endl;
	}
	void CeilingFan::Medium() {
		this->speed_ = kMedium;
		std::cout << this->location_ + " 천장 환풍기를 중간으로 켭니다." << std::endl;
	}
	void CeilingFan::Low() {
		this->speed_ = kLow;
		std::cout << this->location_ + " 천장 환풍기를 약으로 켭니다." << std::endl;
	}
	void CeilingFan::Off() {
		this->speed_ = kOff;
		std::cout << this->location_ + " 천장 환풍기를 끕니다." << std::endl;
	}
	int CeilingFan::GetSpeed() {
		return this->speed_;
	}
}