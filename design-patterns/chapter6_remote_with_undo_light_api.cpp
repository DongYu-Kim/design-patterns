#include <iostream>
#include "chapter6_remote_with_undo_api.h"

namespace chapter6_remote_with_undo {
	Light::Light(std::string location) {
		this->location_ = location;
	}
	void Light::On() {
		this->level_ = 100;
		std::cout << this->location_ + " ���� �մϴ�." << std::endl;
	}
	void Light::Off() {
		this->level_ = 0;
		std::cout << this->location_ + " ���� ���ϴ�." << std::endl;
	}
	void Light::Dim(int level) {
		this->level_ = level;
		if (this->level_) std::cout << "��Ⱑ " + std::to_string(this->level_) + "%�� ��ο����ϴ�." << std::endl;
		else this->Off();
	}
	int Light::GetLevel() {
		return this->level_;
	}
}