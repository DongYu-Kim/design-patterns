#include <iostream>
#include "chapter7_facade_system.h"

namespace chapter7_facade {
	Amplifier::Amplifier(std::string description) {
		this->description_ = description;
	}
	void Amplifier::On() {
		std::cout << this->description_ + "을(를) 켭니다." << std::endl;
	}
	void Amplifier::Off() {
		std::cout << this->description_ + "을(를) 끕니다." << std::endl;
	}
	void Amplifier::SetStereoSound() {
		std::cout << this->description_ + "을(를) 스테레오 모드를 켭니다." << std::endl;
	}
	void Amplifier::SetSurroundSound() {
		std::cout << this->description_ + "을(를) (스피커 5개, 서브우퍼 1개) 서라운드 사운드를 켭니다" << std::endl;
	}
	void Amplifier::SetVolume(int level) {
		std::cout << this->description_ + "의 볼륨을 " + std::to_string(level) + "으로 설정합니다." << std::endl;
	}
	void Amplifier::SetTuner(Tuner* tuner) {
		this->tuner_ = tuner;
		std::cout << this->description_ + "의 튜너를 " + this->tuner_->ToString() + "으로 설정합니다." << std::endl;
	}
	void Amplifier::SetStreamingPlayer(StreamingPlayer* player) {
		this->player_ = player;
		std::cout << this->description_ + "의 플레이어를 " + this->player_->ToString() + "으로 설정합니다." << std::endl;
	}
	std::string Amplifier::ToString() {
		return this->description_;
	}
}