#pragma once
#include <vector>
#include "chapter12_combining_quack_observable_interface.h"
#include "chapter12_combining_iterator.h"

namespace chapter12_combining {
	class Observable : public QuackObservable {
	private:
		std::vector<Observer*> observers_;
		QuackObservable* duck_ = nullptr;
	public:
		Observable(QuackObservable* duck);
		virtual void RegisterObserver(Observer* observer) override;
		virtual void NotifyObservers() override;
		Iterator* GetObservers();
		virtual std::string ToString() override;
	};
}