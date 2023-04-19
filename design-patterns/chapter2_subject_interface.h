#pragma once
#include "chapter2_observer_interface.h"

namespace chapter2 {
	class Subject {
	public:
		virtual void RegisterObserver(Observer* observer) = 0;
		virtual void RemoveObserver(Observer* observer) = 0;
	protected:
		virtual void NotifyObserver() = 0;
	};
}