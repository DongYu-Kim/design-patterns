#include <iostream>
#include "chapter12_combining_quackable.h"

namespace chapter12_combining {
	RedheadDuck::RedheadDuck() {
		this->observable_ = new Observable(this);
	}
	RedheadDuck::~RedheadDuck() {
		delete this->observable_;
	}
	void RedheadDuck::Quack() {
		std::cout << "≤–" << std::endl;
		this->NotifyObservers();
	}
	void RedheadDuck::RegisterObserver(Observer* observer) {
		this->observable_->RegisterObserver(observer);
	}
	void RedheadDuck::NotifyObservers() {
		this->observable_->NotifyObservers();
	}
	std::string RedheadDuck::ToString() {
		return "∫”¿∫∏”∏Æ ø¿∏Æ";
	}
}