#include <iostream>
#include "chapter12_combining_quack_observable_interface.h"
#include "chapter12_combining_observer.h"

namespace chapter12_combining {
	void Quackologist::Update(QuackObservable* duck) {
		std::cout << "꽥 박사 : " + duck->ToString() + "가 울었습니다." << std::endl;
	}
	std::string Quackologist::ToString() {
		return "꽥 박사";
	}
}