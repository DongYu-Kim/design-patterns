#pragma once
#include <string>
#include "chapter8_template.h"

namespace chapter8 {
	class Coffee : public CaffeineBeverage {
		virtual void Brew() override;
		virtual void AddCondiments() override;
	};
	
	class Tea : public CaffeineBeverage {
		virtual void Brew() override;
		virtual void AddCondiments() override;
	};

	class CoffeeWithHook : public CaffeineBeverageWithHook {
		virtual void Brew() override;
		virtual void AddCondiments() override;
		virtual bool CustomerWantsCondiments() override;
		std::string GetUserInput();
	};

	class TeaWithHook : public CaffeineBeverageWithHook {
		virtual void Brew() override;
		virtual void AddCondiments() override;
		virtual bool CustomerWantsCondiments() override;
		std::string GetUserInput();
	};
}