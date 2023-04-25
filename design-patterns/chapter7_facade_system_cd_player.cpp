#include <iostream>
#include "chapter7_facade_system.h"

namespace chapter7_facade {
	CdPlayer::CdPlayer(std::string description, Amplifier* amplifier) {
		this->description_ = description;
		this->amplifier_ = amplifier;
	}
	void CdPlayer::On() {
		std::cout << this->description_ + "��(��) �մϴ�." << std::endl;
	}
	void CdPlayer::Off() {
		std::cout << this->description_ + "��(��) ���ϴ�." << std::endl;
	}
	void CdPlayer::Eject() {
		this->title_ = "";
		std::cout << this->description_ + "��(��) �����ϴ�." << std::endl;
	}
	void CdPlayer::Play(std::string title) {
		this->title_ = title;
		this->current_track_ = 0;
		std::cout << this->description_ + "��(��) " + this->title_ + "��(��) ����մϴ�." << std::endl;
	}
	void CdPlayer::Play(int track) {
		if (this->title_.length()) {
			this->current_track_ = track;
			std::cout << this->description_ + "��(��) " + std::to_string(this->current_track_) + " Ʈ���� ����մϴ�." << std::endl;
		}
		else std::cout << "cd�� ���Ե��� �ʾ�, " + this->description_ + "��(��) " + std::to_string(this->current_track_) + " Ʈ���� ������� �� �մϴ�." << std::endl;
	}
	void CdPlayer::Stop() {
		this->current_track_ = 0;
		std::cout << this->description_ + "��(��) ����� �ߴ��մϴ�." << std::endl;
	}
	void CdPlayer::Pause() {
		std::cout << this->description_ + "��(��) " + this->title_ + " ����� �Ͻ����� �մϴ�." << std::endl;
	}
	std::string CdPlayer::ToString() {
		return this->description_;
	}
}