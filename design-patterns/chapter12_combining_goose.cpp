#include <iostream>
#include "chapter12_combining_quackable.h"

namespace chapter12_combining {
	void Goose::Honk() {
		std::cout << "��" << std::endl;
	}
	std::string Goose::ToString() {
		return "����";
	}
}