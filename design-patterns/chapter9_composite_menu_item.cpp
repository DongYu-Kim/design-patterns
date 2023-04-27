#include <iostream>
#include "chapter9_composite_menu_item.h"

namespace chapter9_composite {
	MenuItem::MenuItem(std::string name, std::string description, double price, bool vegetarian) {
		this->name_ = name;
		this->description_ = description;
		this->price_ = price;
		this->vegetarian_ = vegetarian;
	}
	std::string MenuItem::GetName() {
		return this->name_;
	}
	std::string MenuItem::GetDescription() {
		return this->description_;
	}
	double MenuItem::GetPrice() {
		return this->price_;
	}
	bool MenuItem::IsVegetarian() {
		return this->vegetarian_;
	}
	void MenuItem::Print() {
		std::cout << "  " + this->GetName();
		if (this->IsVegetarian()) std::cout << "(v)";
		std::cout << ", ";
		std::cout << this->GetPrice() << std::endl;
		std::cout << "     -- " + this->GetDescription() << std::endl;
	}
}