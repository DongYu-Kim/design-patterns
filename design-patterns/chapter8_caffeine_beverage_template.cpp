#include <iostream>
#include "chapter8_template.h"

namespace chapter8 {
	void CaffeineBeverage::PrepareRecipe() {
		this->BoilWater();
		this->Brew();
		this->PourInCup();
		this->AddCondiments();
	}
	void CaffeineBeverage::BoilWater() {
		std::cout << "���� ���Դϴ�." << std::endl;
	}
	void CaffeineBeverage::PourInCup() {
		std::cout << "�ſ� �׽��ϴ�." << std::endl;
	}
}