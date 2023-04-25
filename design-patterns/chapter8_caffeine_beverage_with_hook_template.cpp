#include <iostream>
#include "chapter8_template.h"

namespace chapter8 {
	void CaffeineBeverageWithHook::PrepareRecipe() {
		bool result = this->CustomerWantsCondiments();
		this->BoilWater();
		this->Brew();
		this->PourInCup();
		if (result) this->AddCondiments();
	}
	void CaffeineBeverageWithHook::BoilWater() {
		std::cout << "¹°À» ²úÀÔ´Ï´Ù." << std::endl;
	}
	void CaffeineBeverageWithHook::PourInCup() {
		std::cout << "ÄÅ¿¡ º×½À´Ï´Ù." << std::endl;
	}
	bool CaffeineBeverageWithHook::CustomerWantsCondiments() {
		return true;
	}
}