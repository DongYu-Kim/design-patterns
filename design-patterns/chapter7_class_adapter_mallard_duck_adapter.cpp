#include <time.h>
#include <stdlib.h>
#include "chapter7_class_adapter.h"

namespace chapter7_class_adapter {
	void MallardDuckAdapter::Quack() {
		MallardDuck::Quack();
	}
	void MallardDuckAdapter::Gobble() {
		this->Quack();
	}
	void MallardDuckAdapter::Fly() {
		if (!(rand() % 5)) MallardDuck::Fly();
	}
}