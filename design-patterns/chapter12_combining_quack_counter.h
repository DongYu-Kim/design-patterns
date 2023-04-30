#pragma once
#include "chapter12_combining_quackable_interface.h"

namespace chapter12_combining {
	class QuackCounter : public Quackable {
	private:
		Quackable* duck_ = nullptr;
		static int number_of_quacks_;
	public:
		QuackCounter(Quackable* duck);
		~QuackCounter();
		virtual void Quack();
		static int GetQuacks();
		virtual void RegisterObserver(Observer* observer) override;
		virtual void NotifyObservers() override;
		virtual std::string ToString() override;
	};
}