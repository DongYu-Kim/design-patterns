#include <iostream>
#include "chapter7_facade_system.h"

namespace chapter7_facade {
	Projector::Projector(std::string description, StreamingPlayer* player) {
		this->description_ = description;
		this->player_ = player;
	}
	void Projector::On() {
		std::cout << this->description_ << "을(를) 켭니다." << std::endl;
	}
	void Projector::Off() {
		std::cout << this->description_ << "을(를) 끕니다." << std::endl;
	}
	void Projector::WideScreenMode() {
		std::cout << this->description_ << "을(를) (16x9 종횡비) 와이드스크린 모드로 설정합니다." << std::endl;
	}
	void Projector::TvMode() {
		std::cout << this->description_ << "을(를) (4x3 종횡비) TV 모드로 설정합니다." << std::endl;
	}
	std::string Projector::ToString() {
		return this->description_;
	}
}