#include "chapter7_class_adapter.h"

namespace chapter7_class_adapter {
	void WildTurkeyAdapter::Gobble() {
		WildTurkey::Gobble();
	}
	void WildTurkeyAdapter::Quack() {
		WildTurkey::Gobble();
	}
	void WildTurkeyAdapter::Fly() {
		for (int i = 0; i < 5; i++) {
			WildTurkey::Fly();
		}
	}
}