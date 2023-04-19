#include <iostream>
#include "chapter1_duck.h"
#include "chapter1_duck_behavior.h"
using std::cout;
using std::endl;

void Chapter1Main() {
	cout << "========== Chapter1 ==========" << endl;
	chapter1_duck::MallardDuck mallar_duck;
	mallar_duck.Display();
	mallar_duck.PerformQuack();
	mallar_duck.Swim();
	mallar_duck.PerformFly();

	chapter1_duck::RedheadDuck redhead_duck;
	redhead_duck.Display();
	redhead_duck.PerformQuack();
	redhead_duck.Swim();
	redhead_duck.PerformFly();

	chapter1_duck::RubberDuck rubber_duck;
	rubber_duck.Display();
	rubber_duck.PerformQuack();
	rubber_duck.Swim();
	rubber_duck.PerformFly();

	chapter1_duck::DecoyDuck decoy_duck;
	decoy_duck.SetFlyBehavior(new chapter1_duck::FlyRocketPowered());
	decoy_duck.Display();
	decoy_duck.PerformQuack();
	decoy_duck.Swim();
	decoy_duck.PerformFly();
}