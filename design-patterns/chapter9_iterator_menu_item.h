#pragma once
#include <string>

namespace chapter9_iterator {
	class MenuItem {
	private:
		std::string name_;
		std::string description_;
		bool vegetarian_ = false;
		double price_ = 0.0;
	public:
		MenuItem(std::string name, std::string description, bool vegetarian, double price);
		std::string GetName();
		std::string GetDescription();
		double GetPrice();
		bool IsVegetarian();
		std::string ToString();
	};
}