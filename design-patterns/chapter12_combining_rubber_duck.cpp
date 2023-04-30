#include <iostream>
#include "chapter12_combining_quackable.h"

namespace chapter12_combining {
	RubberDuck::RubberDuck() {
		this->observable_ = new Observable(this);
	}
	RubberDuck::~RubberDuck() {
		delete this->observable_;
	}
	void RubberDuck::Quack() {
		std::cout << "»à" << std::endl;
		this->NotifyObservers();
	}
	void RubberDuck::RegisterObserver(Observer* observer) {
		this->observable_->RegisterObserver(observer);
	}
	void RubberDuck::NotifyObservers() {
		this->observable_->NotifyObservers();
	}
	std::string RubberDuck::ToString() {
		return "°í¹« ¿À¸®";
	}
}