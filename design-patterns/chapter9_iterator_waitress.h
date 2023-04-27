#pragma once
#include "chapter9_iterator_menu_interface.h"
#include "chapter9_iterator_interface.h"

namespace chapter9_iterator {
	class Waitress {
	private:
		Menu* pancake_house_menu_ = nullptr;
		Menu* diner_menu_ = nullptr;
		
		void PrintMenu(Iterator* iterator);
		void PrintVegetarianMenu(Iterator* iterator);
		bool IsVegetarian(std::string name, Iterator* iterator);
	public:
		Waitress(Menu* pancake_house_menu, Menu* diner_menu);
		void PrintMenu();
		void PrintVegetarianMenu();
		bool IsItemVegetarian(std::string name);
	};
}