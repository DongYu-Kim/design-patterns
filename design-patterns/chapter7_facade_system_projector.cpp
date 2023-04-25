#include <iostream>
#include "chapter7_facade_system.h"

namespace chapter7_facade {
	Projector::Projector(std::string description, StreamingPlayer* player) {
		this->description_ = description;
		this->player_ = player;
	}
	void Projector::On() {
		std::cout << this->description_ << "��(��) �մϴ�." << std::endl;
	}
	void Projector::Off() {
		std::cout << this->description_ << "��(��) ���ϴ�." << std::endl;
	}
	void Projector::WideScreenMode() {
		std::cout << this->description_ << "��(��) (16x9 ��Ⱦ��) ���̵彺ũ�� ���� �����մϴ�." << std::endl;
	}
	void Projector::TvMode() {
		std::cout << this->description_ << "��(��) (4x3 ��Ⱦ��) TV ���� �����մϴ�." << std::endl;
	}
	std::string Projector::ToString() {
		return this->description_;
	}
}