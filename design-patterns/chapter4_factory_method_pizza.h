#pragma once
#include <string>
#include <list>

namespace chapter4_factory_method {
	class Pizza {
	protected:
		std::string name_;
		std::string dough_;
		std::string sauce_;
		std::list<std::string> toppings_;
	public:
		void Prepare();
		void Bake();
		void Cut();
		void Box();
		std::string GetName();
		std::string ToString();
	};
}