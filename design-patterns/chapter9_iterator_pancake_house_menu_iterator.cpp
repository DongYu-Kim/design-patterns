#include "chapter9_iterator.h"

namespace chapter9_iterator {
	PancakeHouseMenuIterator::PancakeHouseMenuIterator(std::vector<MenuItem*>* items) {
		this->items_ = items;
	}
	MenuItem* PancakeHouseMenuIterator::Next() {
		return this->items_->at(this->position_++);
	}
	bool PancakeHouseMenuIterator::HasNext() {
		return this->position_ < this->items_->size();
	}
}