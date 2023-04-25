#pragma once

namespace chapter8 {
	class CaffeineBeverage {
	public:
		virtual void PrepareRecipe() final;
	private:
		virtual void Brew() = 0;
		virtual void AddCondiments() = 0;
		void BoilWater();
		void PourInCup();
	};

	class CaffeineBeverageWithHook {
	public:
		virtual void PrepareRecipe() final;
	private:
		virtual void Brew() = 0;
		virtual void AddCondiments() = 0;
		void BoilWater();
		void PourInCup();
		virtual bool CustomerWantsCondiments();
	};
}