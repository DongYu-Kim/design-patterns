#pragma once
#include "chapter9_iterator_interface.h"

namespace chapter9_iterator {
	class Menu {
	public:
		virtual Iterator* CreateIterator() = 0;
	};
}