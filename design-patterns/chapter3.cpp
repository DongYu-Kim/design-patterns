#include <iostream>
#include "chapter3_beverage.h"
#include "chapter3_beverage_decorator.h"

namespace chapter3 {
	void main() {
		std::cout << "========== Chapter3 ==========" << std::endl;
		Beverage* beverage1 = new Espresso();
		std::cout << beverage1->GetDescription() + " $" << beverage1->Cost() << std::endl;
		
		Beverage* beverage2 = new DarkRoast();
		beverage2 = new Mocha(beverage2);
		beverage2 = new Mocha(beverage2);
		beverage2 = new Whip(beverage2);
		std::cout << beverage2->GetDescription() + " $" << beverage2->Cost() << std::endl;

		Beverage* beverage3 = new HouseBlend();
		beverage3 = new Soy(beverage3);
		beverage3 = new Mocha(beverage3);
		beverage3 = new Whip(beverage3);
		std::cout << beverage3->GetDescription() + " $" << beverage3->Cost() << std::endl;
	
		delete beverage1;
		delete beverage2;
		delete beverage3;
	}
}