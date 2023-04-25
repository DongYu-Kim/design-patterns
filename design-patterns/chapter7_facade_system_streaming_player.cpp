#include <iostream>
#include "chapter7_facade_system.h"

namespace chapter7_facade {
	StreamingPlayer::StreamingPlayer(std::string description, Amplifier* amplifier) {
		this->description_ = description;
		this->amplifier_ = amplifier;
	}
	void StreamingPlayer::On() {
		std::cout << this->description_ + "��(��) �մϴ�." << std::endl;
	}
	void StreamingPlayer::Off() {
		std::cout << this->description_ + "��(��) ���ϴ�." << std::endl;
	}
	void StreamingPlayer::Play(std::string movie) {
		this->movie_ = movie;
		this->current_chapter_ = 0;
		std::cout << this->description_ + "��(��) " + this->movie_ + "��(��) ����մϴ�." << std::endl;
	}
	void StreamingPlayer::Play(int chapter) {
		if (this->movie_.length()) {
			this->current_chapter_ = chapter;
			std::cout << this->description_ + "��(��) " + this->movie_ + "�� " + std::to_string(this->current_chapter_) + " é�͸� ����մϴ�." << std::endl;
		}
		else std::cout << "��ȭ�� ���õ��� �ʾ�, " + this->description_ + "��(��) " + std::to_string(this->current_chapter_) + " é�͸� ������� �� �մϴ�." << std::endl;
	}
	void StreamingPlayer::Stop() {
		this->current_chapter_ = 0;
		std::cout << this->description_ + "��(��) " + this->movie_ + " ����� �ߴ��մϴ�." << std::endl;
	}
	void StreamingPlayer::Pause() {
		std::cout << this->description_ + "��(��) " + this->movie_ + " ����� �Ͻ����� �մϴ�." << std::endl;
	}
	void StreamingPlayer::SetTwoChannelAudio() {
		std::cout << this->description_ + "��(��) 2ä�� ������� �����մϴ�." << std::endl;
	}
	void StreamingPlayer::SetSurroundAudio() {
		std::cout << this->description_ + "��(��) ������ ������� �����մϴ�." << std::endl;
	}
	std::string StreamingPlayer::ToString() {
		return this->description_;
	}
}