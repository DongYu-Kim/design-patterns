#pragma once
#include <iostream>
#include <string>
#include <list>

namespace chapter4 {
	class Pizza {
	private:
		std::string name_;
		std::string dough_;
		std::string sauce_;
		std::list<std::string> toppings_;
	public:
		std::string GetName() { return this->name_; }
		virtual void Prepare() = 0;
		virtual void Bake() = 0;
		virtual void Cut() = 0;
		virtual void Box() = 0;
	};
}