#include <iostream>
#include "chapter12_combining_quack_observable_interface.h"
#include "chapter12_combining_observer.h"

namespace chapter12_combining {
	void Quackologist::Update(QuackObservable* duck) {
		std::cout << "�� �ڻ� : " + duck->ToString() + "�� ������ϴ�." << std::endl;
	}
	std::string Quackologist::ToString() {
		return "�� �ڻ�";
	}
}