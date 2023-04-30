#include "chapter12_combining_iterator.h"

namespace chapter12_combining {
	ObservableIterator::ObservableIterator(std::vector<Observer*>* items) {
		this->items_ = items;
		this->position_ = 0;
	}
	Observer* ObservableIterator::Next() {
		return this->items_->at(this->position_++);
	}
	bool ObservableIterator::HasNext() {
		return this->position_ < this->items_->size();
	}
}