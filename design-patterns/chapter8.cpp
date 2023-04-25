#include <iostream>
#include "chapter8_beverage.h"

namespace chapter8 {
	void main() {
		std::cout << "========== Chapter8 ==========" << std::endl;
		Tea* tea = new Tea();
		Coffee* coffee = new Coffee();
		std::cout << "�� ����� ��..." << std::endl;
		tea->PrepareRecipe();
		std::cout << "Ŀ�� ����� ��..." << std::endl;
		coffee->PrepareRecipe();
		
		TeaWithHook* tea_hook = new TeaWithHook();
		CoffeeWithHook* coffee_hook = new CoffeeWithHook();
		std::cout << "�� ����� ��..." << std::endl;
		tea_hook->PrepareRecipe();
		std::cout << "Ŀ�� ����� ��..." << std::endl;
		coffee_hook->PrepareRecipe();

		delete tea;
		delete coffee;
		delete tea_hook;
		delete coffee_hook;
	}
}