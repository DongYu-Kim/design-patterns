#include <iostream>
#include "chapter7_facade_system.h"

namespace chapter7_facade {
	PopcornPopper::PopcornPopper(std::string description) {
		this->description_ = description;
	}
	void PopcornPopper::On() {
		std::cout << this->description_ + "��(��) �մϴ�." << std::endl;
	}
	void PopcornPopper::Off() {
		std::cout << this->description_ + "��(��) ���ϴ�." << std::endl;
	}
	void PopcornPopper::Pop() {
		std::cout << this->description_ + "��(��) ������ Ƣ��ϴ�." << std::endl;
	}
	std::string PopcornPopper::ToString() {
		return this->description_;
	}
}