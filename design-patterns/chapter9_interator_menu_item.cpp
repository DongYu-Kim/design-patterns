#include "chapter9_iterator_menu_item.h"

namespace chapter9_iterator {
	MenuItem::MenuItem(std::string name, std::string description, bool vegetarian, double price) {
		this->name_ = name;
		this->description_ = description;
		this->vegetarian_ = vegetarian;
		this->price_ = price;
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
	std::string MenuItem::ToString() {
		return this->name_ + ", $" + std::to_string(this->price_) + "\n   " + this->description_;
	}
}