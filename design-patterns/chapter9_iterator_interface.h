#pragma once
#include "chapter9_iterator_menu_item.h"
namespace chapter9_iterator {
	class Iterator {
	public:
		virtual bool HasNext() = 0;
		virtual MenuItem* Next() = 0;
	};
}