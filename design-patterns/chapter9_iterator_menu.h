#pragma once
#include "chapter9_iterator_menu_interface.h"
#include "chapter9_iterator.h"

namespace chapter9_iterator {
	class DinerMenu : public Menu {
	private:
		static const int kMaxItems = 6;
		int number_of_items_ = 0;
		MenuItem** menu_items_ = nullptr;
	public:
		DinerMenu();
		~DinerMenu();
		void AddItem(std::string name, std::string description, bool vegetarian, double price);
		MenuItem** GetMenuItems();
		size_t GetNumberOfItems();
		virtual Iterator* CreateIterator() override;
	};

	class PancakeHouseMenu : public Menu {
	private:
		std::vector<MenuItem*> menu_items_;
	public:
		PancakeHouseMenu();
		~PancakeHouseMenu();
		void AddItem(std::string name, std::string description, bool vegetarian, double price);
		std::vector<MenuItem*>& GetMenuItems();
		virtual Iterator* CreateIterator() override;
		std::string ToString();
	};
}