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
		std::cout << "¹°À» ²úÀÔ´Ï´Ù." << std::endl;
	}
	void CaffeineBeverage::PourInCup() {
		std::cout << "ÄÅ¿¡ º×½À´Ï´Ù." << std::endl;
	}
}