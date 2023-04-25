#include <iostream>
#include "chapter7_facade_system.h"

namespace chapter7_facade {
	StreamingPlayer::StreamingPlayer(std::string description, Amplifier* amplifier) {
		this->description_ = description;
		this->amplifier_ = amplifier;
	}
	void StreamingPlayer::On() {
		std::cout << this->description_ + "을(를) 켭니다." << std::endl;
	}
	void StreamingPlayer::Off() {
		std::cout << this->description_ + "을(를) 끕니다." << std::endl;
	}
	void StreamingPlayer::Play(std::string movie) {
		this->movie_ = movie;
		this->current_chapter_ = 0;
		std::cout << this->description_ + "이(가) " + this->movie_ + "을(를) 재생합니다." << std::endl;
	}
	void StreamingPlayer::Play(int chapter) {
		if (this->movie_.length()) {
			this->current_chapter_ = chapter;
			std::cout << this->description_ + "이(가) " + this->movie_ + "의 " + std::to_string(this->current_chapter_) + " 챕터를 재생합니다." << std::endl;
		}
		else std::cout << "영화가 선택되지 않아, " + this->description_ + "이(가) " + std::to_string(this->current_chapter_) + " 챕터를 재생하지 못 합니다." << std::endl;
	}
	void StreamingPlayer::Stop() {
		this->current_chapter_ = 0;
		std::cout << this->description_ + "이(가) " + this->movie_ + " 재생을 중단합니다." << std::endl;
	}
	void StreamingPlayer::Pause() {
		std::cout << this->description_ + "이(가) " + this->movie_ + " 재생을 일시정지 합니다." << std::endl;
	}
	void StreamingPlayer::SetTwoChannelAudio() {
		std::cout << this->description_ + "이(가) 2채널 오디오를 설정합니다." << std::endl;
	}
	void StreamingPlayer::SetSurroundAudio() {
		std::cout << this->description_ + "이(가) 서라운드 오디오를 설정합니다." << std::endl;
	}
	std::string StreamingPlayer::ToString() {
		return this->description_;
	}
}