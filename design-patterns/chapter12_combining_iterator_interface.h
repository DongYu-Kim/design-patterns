#pragma once
#include "chapter12_combining_observer_interface.h"

namespace chapter12_combining {
	class Iterator {
	public:
		virtual Observer* Next() = 0;
		virtual bool HasNext() = 0;
	};
}