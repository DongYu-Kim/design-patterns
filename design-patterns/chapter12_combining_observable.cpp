#include "chapter12_combining_observable.h"

namespace chapter12_combining {
	Observable::Observable(QuackObservable* duck) {
		this->duck_ = duck;
	}
	void Observable::RegisterObserver(Observer* observer) {
		this->observers_.push_back(observer);
	}
	void Observable::NotifyObservers() {
		for (Observer* observer : this->observers_) {
			observer->Update(this->duck_);
		}
	}
	Iterator* Observable::GetObservers() {
		return new ObservableIterator(&this->observers_);
	}
	std::string Observable::ToString() {
		return "";
	}
}