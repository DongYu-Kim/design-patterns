#include <iostream>
#include "chapter6_macro_api.h"

namespace chapter6_macro {
	Stereo::Stereo(std::string location) {
		this->location_ = location;
	}
	void Stereo::On() {
		std::cout << this->location_ + " 스테레오를 켭니다." << std::endl;
	}
	void Stereo::Off() {
		std::cout << this->location_ + " 스테레오를 끕니다." << std::endl;
	}
	void Stereo::SetCD() {
		std::cout << this->location_ + " 스테레오가 CD 입력용으로 설정됩니다." << std::endl;
	}
	void Stereo::SetDVD() {
		std::cout << this->location_ + " 스테레오가 DVD 입력용으로 설정됩니다." << std::endl;
	}
	void Stereo::SetRadio() {
		std::cout << this->location_ + " 스테레오가 라디오용으로 설정됩니다." << std::endl;
	}
	void Stereo::SetVolume(int volume) {
		std::cout << this->location_ + " 스테레오 볼륨을 " + std::to_string(volume) + "으로 설정합니다." << std::endl;
	}
}