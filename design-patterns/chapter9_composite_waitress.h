#pragma once
#include "chapter9_composite_menu_component.h"

namespace chapter9_composite {
	class Waitress {
	private:
		MenuComponent* all_menus_ = nullptr;
	public:
		Waitress(MenuComponent* all_menus);
		~Waitress();
		void PrintMenu();
	};
}