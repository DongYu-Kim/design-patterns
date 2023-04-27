#include "chapter9_composite_menu.h"
#include <iostream>
#include <algorithm>

namespace chapter9_composite {
	Menu::Menu(std::string name, std::string description) {
		this->menu_components_.clear();
		this->name_ = name;
		this->description_ = description;
	}
	Menu::~Menu() {
		for (MenuComponent* menu_component : this->menu_components_) {
			delete menu_component;
		}
	}
	void Menu::Add(MenuComponent* menu_component) {
		this->menu_components_.push_back(menu_component);
	}
	void Menu::Remove(MenuComponent* menu_component) {
		this->menu_components_.erase(
			std::remove_if(this->menu_components_.begin(), this->menu_components_.end(), [menu_component](MenuComponent* ptr) { return ptr == menu_component; })
			, this->menu_components_.end());
	}
	MenuComponent* Menu::GetChild(int i) {
		return this->menu_components_.at(i);
	}
	std::string Menu::GetName() {
		return this->name_;
	}
	std::string Menu::GetDescription() {
		return this->description_;
	}
	void Menu::Print() {
		std::cout << "\n" + this->GetName() + ", " + this->GetDescription() << std::endl;
		std::cout << "---------------------" << std::endl;
		for (MenuComponent* menu_component : this->menu_components_) {
			menu_component->Print();
		}
	}
}