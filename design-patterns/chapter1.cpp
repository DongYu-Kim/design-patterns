#include <iostream>
#include "chapter1_duck.h"
#include "chapter1_duck_behavior.h"

namespace chapter1 {
	void main() {
		std::cout << "========== Chapter1 ==========" << std::endl;
		chapter1::MallardDuck mallar_duck;
		mallar_duck.Display();
		mallar_duck.PerformQuack();
		mallar_duck.Swim();
		mallar_duck.PerformFly();

		chapter1::RedheadDuck redhead_duck;
		redhead_duck.Display();
		redhead_duck.PerformQuack();
		redhead_duck.Swim();
		redhead_duck.PerformFly();

		chapter1::RubberDuck rubber_duck;
		rubber_duck.Display();
		rubber_duck.PerformQuack();
		rubber_duck.Swim();
		rubber_duck.PerformFly();

		chapter1::DecoyDuck decoy_duck;
		decoy_duck.SetFlyBehavior(new chapter1::FlyRocketPowered());
		decoy_duck.Display();
		decoy_duck.PerformQuack();
		decoy_duck.Swim();
		decoy_duck.PerformFly();
	}
}