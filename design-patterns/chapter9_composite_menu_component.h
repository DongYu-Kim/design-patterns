#pragma once
#include <string>

namespace chapter9_composite {
	class MenuComponent {
	public:
		virtual void Add(MenuComponent* menu_component);
		virtual void Remove(MenuComponent* menu_component);
		virtual MenuComponent* GetChild(int i);
		virtual std::string GetName();
		virtual std::string GetDescription();
		virtual double GetPrice();
		virtual bool IsVegetarian();
		virtual void Print();
	};
}