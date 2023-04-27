#pragma once
#include "chapter9_composite_menu_component.h"

namespace chapter9_composite {
	class MenuItem : public MenuComponent {
	private:
		std::string name_;
		std::string description_;
		double price_;
		bool vegetarian_;
	public:
		MenuItem(std::string name, std::string description, double price, bool vegetarian);
		virtual std::string GetName() override;
		virtual std::string GetDescription() override;
		virtual double GetPrice() override;
		virtual bool IsVegetarian() override;
		virtual void Print() override;
	};
}