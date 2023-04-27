#include <iostream>
#include "chapter9_iterator_menu.h"
#include "chapter9_iterator_waitress.h"

namespace chapter9 {
	static void PrintMenus();
	void main() {
		std::cout << "========== Chapter9 ==========" << std::endl;
		std::cout << "========== Iterator ==========" << std::endl;
		chapter9_iterator::Menu* pancake_house_menu = new chapter9_iterator::PancakeHouseMenu();
		chapter9_iterator::Menu* diner_menu = new chapter9_iterator::DinerMenu();
		chapter9_iterator::Waitress* waitress = new chapter9_iterator::Waitress(pancake_house_menu, diner_menu);
		waitress->PrintMenu();
		PrintMenus();

		delete pancake_house_menu;
		delete diner_menu;
		delete waitress;
	}
	void PrintMenus() {
		chapter9_iterator::PancakeHouseMenu* pancake_house_menu = new chapter9_iterator::PancakeHouseMenu();
		chapter9_iterator::DinerMenu* diner_menu = new chapter9_iterator::DinerMenu();

		std::vector<chapter9_iterator::MenuItem*> breakfast_items = pancake_house_menu->GetMenuItems();
		chapter9_iterator::MenuItem** lunch_items = diner_menu->GetMenuItems();
		int number_of_lunch_items = diner_menu->GetNumberOfItems();

		for (auto menu_item : breakfast_items) {
			std::cout << menu_item->GetName() + "\t\t";
			std::cout << menu_item->GetPrice() << std::endl;
			std::cout << "\t" + menu_item->GetDescription() << std::endl;
		}
		for (int i = 0; i < number_of_lunch_items; i++) {
			chapter9_iterator::MenuItem* menu_item = lunch_items[i];
			std::cout << menu_item->GetName() + "\t\t";
			std::cout << menu_item->GetPrice() << std::endl;
			std::cout << "\t" + menu_item->GetDescription() << std::endl;
		}

		delete pancake_house_menu;
		delete diner_menu;
	}
}