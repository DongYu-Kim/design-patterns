#include "chapter12_combining_counting_duck_factory.h"
#include "chapter12_combining_quack_counter.h"
#include "chapter12_combining_quackable.h"

namespace chapter12_combining {
	Quackable* CountingDuckFactory::CreateMallardDuck() {
		return new QuackCounter(new MallardDuck());
	}
	Quackable* CountingDuckFactory::CreateRedHeadDuck() {
		return new QuackCounter(new RedheadDuck());
	}
	Quackable* CountingDuckFactory::CreateDuckCall() {
		return new QuackCounter(new DuckCall());
	}
	Quackable* CountingDuckFactory::CreateRubberDuck() {
		return new QuackCounter(new RubberDuck());
	}
}