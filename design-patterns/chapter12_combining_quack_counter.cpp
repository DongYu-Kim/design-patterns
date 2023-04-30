#include "chapter12_combining_quack_counter.h"

namespace chapter12_combining {
	int QuackCounter::number_of_quacks_ = 0;
	QuackCounter::QuackCounter(Quackable* duck) {
		this->duck_ = duck;
	}
	QuackCounter::~QuackCounter() {
		delete this->duck_;
	}
	void QuackCounter::Quack() {
		this->duck_->Quack();
		QuackCounter::number_of_quacks_++;
	}
	int QuackCounter::GetQuacks() {
		return QuackCounter::number_of_quacks_;
	}
	void QuackCounter::RegisterObserver(Observer* observer) {
		this->duck_->RegisterObserver(observer);
	}
	void QuackCounter::NotifyObservers() {
		this->duck_->NotifyObservers();
	}
	std::string QuackCounter::ToString() {
		return this->duck_->ToString();
	}
}