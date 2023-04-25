#include "chapter7_object_adapter.h"

namespace chapter7_object_adapter {
	TurkeyAdapter::TurkeyAdapter(Turkey* turkey) {
		this->turkey_ = turkey;
	}
	void TurkeyAdapter::Quack() {
		this->turkey_->Gobble();
	}
	void TurkeyAdapter::Fly() {
		for (int i = 0; i < 5; i++) {
			this->turkey_->Fly();
		}
	}
}