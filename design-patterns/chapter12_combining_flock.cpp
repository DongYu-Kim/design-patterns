#include <iostream>
#include "chapter12_combining_quackable.h"

namespace chapter12_combining {
	Flock::~Flock() {
		for (Quackable* duck : this->ducks_) {
			delete duck;
		}
	}
	void Flock::Add(Quackable* duck) {
		this->ducks_.push_back(duck);
	}
	void Flock::Quack() {
		for (Quackable* duck : this->ducks_) {
			duck->Quack();
		}
	}
	void Flock::RegisterObserver(Observer* observer) {
		for (Quackable* duck : this->ducks_) {
			duck->RegisterObserver(observer);
		}
	}
	void Flock::NotifyObservers() {}
	std::string Flock::ToString() {
		return "¿À¸® ¶¼";
	}
}