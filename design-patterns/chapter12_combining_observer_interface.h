#pragma once
#include <string>

namespace chapter12_combining {
	class QuackObservable;
	class Observer {
	public:
		virtual void Update(QuackObservable* duck) = 0;
		virtual std::string ToString() = 0;
	};
}