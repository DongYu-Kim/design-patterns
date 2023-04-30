#include "chapter12_combining_quackable.h"

namespace chapter12_combining {
	GooseAdapter::GooseAdapter(Goose* goose) {
		this->goose_ = goose;
		this->observable_ = new Observable(this);
	}
	GooseAdapter::~GooseAdapter() {
		delete this->goose_;
		delete this->observable_;
	}
	void GooseAdapter::Quack() {
		this->goose_->Honk();
		this->NotifyObservers();
	}
	void GooseAdapter::RegisterObserver(Observer* observer) {
		this->observable_->RegisterObserver(observer);
	}
	void GooseAdapter::NotifyObservers() {
		this->observable_->NotifyObservers();
	}
	std::string GooseAdapter::ToString() {
		return "오리인 척하는 거위";
	}
}