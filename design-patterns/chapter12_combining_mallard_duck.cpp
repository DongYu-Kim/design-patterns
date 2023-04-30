#include <iostream>
#include "chapter12_combining_quackable.h"

namespace chapter12_combining {
	MallardDuck::MallardDuck() {
		this->observable_ = new Observable(this);
	}
	MallardDuck::~MallardDuck() {
		delete this->observable_;
	}
	void MallardDuck::Quack() {
		std::cout << "²Ð" << std::endl;
		this->NotifyObservers();
	}
	void MallardDuck::RegisterObserver(Observer* observer) {
		this->observable_->RegisterObserver(observer);
	}
	void MallardDuck::NotifyObservers() {
		this->observable_->NotifyObservers();
	}
	std::string MallardDuck::ToString() {
		return "Ã»µÕ ¿À¸®";
	}
}