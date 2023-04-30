#pragma once
#include <vector>
#include "chapter9_iterator_interface.h"

namespace chapter9_iterator {
	class DinerMenuIterator : public Iterator {
	private:
		MenuItem** items_ = nullptr;
		size_t size_ = 0;
		int position_ = 0;
	public:
		DinerMenuIterator(MenuItem** items, size_t size);
		virtual MenuItem* Next() override;
		virtual bool HasNext() override;
	};

	class PancakeHouseMenuIterator : public Iterator {
	private:
		std::vector<MenuItem*>* items_ = nullptr;
		int position_ = 0;
	public:
		PancakeHouseMenuIterator(std::vector<MenuItem*>* items);
		virtual MenuItem* Next() override;
		virtual bool HasNext() override;
	};
}