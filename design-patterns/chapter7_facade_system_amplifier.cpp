#include <iostream>
#include "chapter7_facade_system.h"

namespace chapter7_facade {
	Amplifier::Amplifier(std::string description) {
		this->description_ = description;
	}
	void Amplifier::On() {
		std::cout << this->description_ + "��(��) �մϴ�." << std::endl;
	}
	void Amplifier::Off() {
		std::cout << this->description_ + "��(��) ���ϴ�." << std::endl;
	}
	void Amplifier::SetStereoSound() {
		std::cout << this->description_ + "��(��) ���׷��� ��带 �մϴ�." << std::endl;
	}
	void Amplifier::SetSurroundSound() {
		std::cout << this->description_ + "��(��) (����Ŀ 5��, ������� 1��) ������ ���带 �մϴ�" << std::endl;
	}
	void Amplifier::SetVolume(int level) {
		std::cout << this->description_ + "�� ������ " + std::to_string(level) + "���� �����մϴ�." << std::endl;
	}
	void Amplifier::SetTuner(Tuner* tuner) {
		this->tuner_ = tuner;
		std::cout << this->description_ + "�� Ʃ�ʸ� " + this->tuner_->ToString() + "���� �����մϴ�." << std::endl;
	}
	void Amplifier::SetStreamingPlayer(StreamingPlayer* player) {
		this->player_ = player;
		std::cout << this->description_ + "�� �÷��̾ " + this->player_->ToString() + "���� �����մϴ�." << std::endl;
	}
	std::string Amplifier::ToString() {
		return this->description_;
	}
}