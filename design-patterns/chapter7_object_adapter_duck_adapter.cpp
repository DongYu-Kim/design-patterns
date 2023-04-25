#include <time.h>
#include <stdlib.h>
#include "chapter7_object_adapter.h"

namespace chapter7_object_adapter {
	DuckAdapter::DuckAdapter(Duck* duck) {
		this->duck_ = duck;
	}
	void DuckAdapter::Gobble() {
		this->duck_->Quack();
	}
	void DuckAdapter::Fly() {
		srand(time(0));
		if (!(rand() % 5)) this->duck_->Fly();
	}
}