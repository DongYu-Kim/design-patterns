#pragma once
#include <string>
#include "chapter12_combining_observer_interface.h"

namespace chapter12_combining {
	class QuackObservable {
	public:
		virtual void RegisterObserver(Observer* observer) = 0;
		virtual void NotifyObservers() = 0;
		virtual std::string ToString() = 0;
	};
}