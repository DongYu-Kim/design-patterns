#include <iostream>
#include "chapter12_combining_counting_duck_factory.h"
#include "chapter12_combining_quackable.h"
#include "chapter12_combining_observer.h"
#include "chapter12_combining_quack_counter.h"

namespace chapter12 {
	void Simulate(chapter12_combining::AbstractDuckFactory*);

	void main() {
		std::cout << "========== chapter12 ==========" << std::endl;
		chapter12_combining::AbstractDuckFactory* duck_factory = new chapter12_combining::CountingDuckFactory();
		Simulate(duck_factory);
		delete duck_factory;
	}

	void Simulate(chapter12_combining::Quackable* duck) {
		duck->Quack();
	}

	void Simulate(chapter12_combining::AbstractDuckFactory* duck_factory) {
		chapter12_combining::Flock* flock_of_ducks = new chapter12_combining::Flock();
		flock_of_ducks->Add(duck_factory->CreateRedHeadDuck());
		flock_of_ducks->Add(duck_factory->CreateDuckCall());
		flock_of_ducks->Add(duck_factory->CreateRubberDuck());
		flock_of_ducks->Add(new chapter12_combining::GooseAdapter(new chapter12_combining::Goose()));
		chapter12_combining::Flock* flock_of_mallards = new chapter12_combining::Flock();
		flock_of_mallards->Add(duck_factory->CreateMallardDuck());
		flock_of_mallards->Add(duck_factory->CreateMallardDuck());
		flock_of_mallards->Add(duck_factory->CreateMallardDuck());
		flock_of_mallards->Add(duck_factory->CreateMallardDuck());
		flock_of_ducks->Add(flock_of_mallards);
		
		std::cout << "\n오리 시뮬레이터: with 옵저버" << std::endl;
		chapter12_combining::Quackologist* quackologist = new chapter12_combining::Quackologist();
		flock_of_ducks->RegisterObserver(quackologist);
		Simulate(flock_of_ducks);
		std::cout << "\n오리들이 " << chapter12_combining::QuackCounter::GetQuacks() << "번 울었다." << std::endl;
		
		delete flock_of_mallards;
		delete quackologist;
	}
}