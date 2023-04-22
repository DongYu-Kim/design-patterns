#pragma once
#include <string>

namespace chapter4_abstract_factory {
	class Dough {
	public:
		virtual std::string ToString() = 0;
	};
	class Sauce {
	public:
		virtual std::string ToString() = 0;
	};
	class Cheese {
	public:
		virtual std::string ToString() = 0;
	};
	class Veggies {
	public:
		virtual std::string ToString() = 0;
	};
	class Pepperoni {
	public:
		virtual std::string ToString() = 0;
	};
	class Clams {
	public:
		virtual std::string ToString() = 0;
	};
}