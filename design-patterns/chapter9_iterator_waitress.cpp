#include <iostream>
#include "chapter9_iterator_waitress.h"

namespace chapter9_iterator {
	Waitress::Waitress(Menu* pancake_house_menu, Menu* diner_menu) {
		this->pancake_house_menu_ = pancake_house_menu;
		this->diner_menu_ = diner_menu;
	}
	void Waitress::PrintMenu(Iterator* iterator) {
		while (iterator->HasNext()) {
			MenuItem* menu_item = iterator->Next();
			std::cout << menu_item->GetName() + ", ";
			std::cout << menu_item->GetPrice();
			std::cout << " -- " + menu_item->GetDescription() << std::endl;
		}
	}
	void Waitress::PrintVegetarianMenu(Iterator* iterator) {
		while (iterator->HasNext()) {
			MenuItem* menu_item = iterator->Next();
			if (!menu_item->IsVegetarian()) continue;
			std::cout << menu_item->GetName() + ", ";
			std::cout << std::to_string(menu_item->GetPrice());
			std::cout << " -- " + menu_item->GetDescription() << std::endl;
		}
	}
	bool Waitress::IsVegetarian(std::string name, Iterator* iterator) {
		while (iterator->HasNext()) {
			MenuItem* menu_item = iterator->Next();
			if (!menu_item->IsVegetarian()) continue;
			if (menu_item->GetName() != name) continue;
			return true;
		}
		return false;
	}
	void Waitress::PrintMenu() {
		Iterator* pancake_iterator = this->pancake_house_menu_->CreateIterator();
		Iterator* diner_iterator = this->diner_menu_->CreateIterator();
		std::cout << "MENU\n----\nBREAKFAST" << std::endl;
		this->PrintMenu(pancake_iterator);
		std::cout << "\nLUNCH" << std::endl;
		this->PrintMenu(diner_iterator);
		delete pancake_iterator;
		delete diner_iterator;
	}
	void Waitress::PrintVegetarianMenu() {
		Iterator* pancake_iterator = this->pancake_house_menu_->CreateIterator();
		Iterator* diner_iterator = this->diner_menu_->CreateIterator();
		this->PrintVegetarianMenu(pancake_iterator);
		this->PrintVegetarianMenu(diner_iterator);
		delete pancake_iterator;
		delete diner_iterator;
	}
	bool Waitress::IsItemVegetarian(std::string name) {
		Iterator* breakfast_iterator = this->pancake_house_menu_->CreateIterator();
		bool result = this->IsVegetarian(name, breakfast_iterator);
		delete breakfast_iterator;
		if (result) return true;
		Iterator* dinner_iterator = this->diner_menu_->CreateIterator();
		result = this->IsVegetarian(name, dinner_iterator);
		delete dinner_iterator;
		return result;
	}
}