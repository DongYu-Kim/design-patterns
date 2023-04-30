#include <iostream>
#include "chapter12_combining_quackable.h"

namespace chapter12_combining {
	DecoyDuck::DecoyDuck() {
		this->observable_ = new Observable(this);
	}
	DecoyDuck::~DecoyDuck() {
		delete this->observable_;
	}
	void DecoyDuck::Quack() {
		std::cout << "..." << std::endl;
		this->NotifyObservers();
	}
	void DecoyDuck::RegisterObserver(Observer* observer) {
		this->observable_->RegisterObserver(observer);
	}
	void DecoyDuck::NotifyObservers() {
		this->observable_->NotifyObservers();
	}
	std::string DecoyDuck::ToString() {
		return "나무장식 오리";
	}
}