#include <iostream>
#include "chapter7_facade_system.h"

namespace chapter7_facade {
	CdPlayer::CdPlayer(std::string description, Amplifier* amplifier) {
		this->description_ = description;
		this->amplifier_ = amplifier;
	}
	void CdPlayer::On() {
		std::cout << this->description_ + "을(를) 켭니다." << std::endl;
	}
	void CdPlayer::Off() {
		std::cout << this->description_ + "을(를) 끕니다." << std::endl;
	}
	void CdPlayer::Eject() {
		this->title_ = "";
		std::cout << this->description_ + "을(를) 꺼냅니다." << std::endl;
	}
	void CdPlayer::Play(std::string title) {
		this->title_ = title;
		this->current_track_ = 0;
		std::cout << this->description_ + "이(가) " + this->title_ + "을(를) 재생합니다." << std::endl;
	}
	void CdPlayer::Play(int track) {
		if (this->title_.length()) {
			this->current_track_ = track;
			std::cout << this->description_ + "이(가) " + std::to_string(this->current_track_) + " 트랙을 재생합니다." << std::endl;
		}
		else std::cout << "cd가 삽입되지 않아, " + this->description_ + "이(가) " + std::to_string(this->current_track_) + " 트랙을 재생하지 못 합니다." << std::endl;
	}
	void CdPlayer::Stop() {
		this->current_track_ = 0;
		std::cout << this->description_ + "이(가) 재생을 중단합니다." << std::endl;
	}
	void CdPlayer::Pause() {
		std::cout << this->description_ + "이(가) " + this->title_ + " 재생을 일시정지 합니다." << std::endl;
	}
	std::string CdPlayer::ToString() {
		return this->description_;
	}
}