#include "chapter9_iterator.h"

namespace chapter9_iterator {
	DinerMenuIterator::DinerMenuIterator(MenuItem** items, size_t size) {
		this->items_ = items;
		this->size_ = size;
	}
	MenuItem* DinerMenuIterator::Next() {
		return this->items_[this->position_++];
	}
	bool DinerMenuIterator::HasNext() {
		return this->position_ < this->size_;
	}
}