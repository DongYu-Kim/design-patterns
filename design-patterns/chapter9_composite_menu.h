#pragma once
#include <vector>
#include "chapter9_composite_menu_item.h"

namespace chapter9_composite {
	class Menu : public MenuComponent {
	private:
		std::vector<MenuComponent*> menu_components_;
		std::string name_;
		std::string description_;
	public:
		Menu(std::string name, std::string description);
		~Menu();
		virtual void Add(MenuComponent* menu_component);
		virtual void Remove(MenuComponent* menu_component);
		virtual MenuComponent* GetChild(int i);
		virtual std::string GetName();
		virtual std::string GetDescription();
		virtual void Print();
	};
}