#include <iostream>
#include "chapter12_combining_quackable.h"

namespace chapter12_combining {
	DuckCall::DuckCall() {
		this->observable_ = new Observable(this);
	}
	DuckCall::~DuckCall() {
		delete this->observable_;
	}
	void DuckCall::Quack() {
		std::cout << "²Ð" << std::endl;
		this->NotifyObservers();
	}
	void DuckCall::RegisterObserver(Observer* observer) {
		this->observable_->RegisterObserver(observer);
	}
	void DuckCall::NotifyObservers() {
		this->observable_->NotifyObservers();
	}
	std::string DuckCall::ToString() {
		return "¿À¸® ÇÇ¸®";
	}
}