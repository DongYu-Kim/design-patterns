#pragma once
#include <vector>
#include "chapter12_combining_iterator_interface.h"


namespace chapter12_combining {
	class ObservableIterator : public Iterator {
	private:
		std::vector<Observer*>* items_ = nullptr;
		int position_ = 0;
	public:
		ObservableIterator(std::vector<Observer*>* items);
		virtual Observer* Next() override;
		virtual bool HasNext() override;
	};
}