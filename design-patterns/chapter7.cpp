#include <iostream>
#include "chapter7_object_adapter.h"
#include "chapter7_object_adapter_duck.h"
#include "chapter7_object_adapter_turkey.h"
#include "chapter7_class_adapter.h"
#include "chapter7_class_adapter_duck.h"
#include "chapter7_class_adapter_turkey.h"

namespace chapter7 {
	void main() {
		std::cout << "========== Chapter7 ==========" << std::endl;
		std::cout << "========== object adapter ==========" << std::endl;
		chapter7_object_adapter::Duck* duck = new chapter7_object_adapter::MallardDuck();
		chapter7_object_adapter::Turkey* turkey = new chapter7_object_adapter::WildTurkey();
		duck->Quack();
		duck->Fly();
		turkey->Gobble();
		turkey->Fly();
		std::cout << "--- duck adapter ---" << std::endl;
		chapter7_object_adapter::Duck* turkey_duck = new chapter7_object_adapter::TurkeyAdapter(turkey);
		turkey_duck->Quack();
		turkey_duck->Fly();
		std::cout << "--- turkey adapter ---" << std::endl;
		chapter7_object_adapter::Turkey* duck_turkey = new chapter7_object_adapter::DuckAdapter(duck);
		duck_turkey->Gobble();
		duck_turkey->Fly();
		delete duck;
		delete turkey;
		delete turkey_duck;
		delete duck_turkey;

		std::cout << "========== class adapter ==========" << std::endl;
		std::cout << "--- duck adapter ---" << std::endl;
		chapter7_class_adapter::Duck* turkey_duck2 = new chapter7_class_adapter::WildTurkeyAdapter();
		turkey_duck2->Quack();
		turkey_duck2->Fly();
		std::cout << "--- turkey adapter ---" << std::endl;
		chapter7_class_adapter::Turkey* duck_turkey2 = new chapter7_class_adapter::MallardDuckAdapter();
		duck_turkey2->Gobble();
		duck_turkey2->Fly();
		delete turkey_duck2;
		delete duck_turkey2;
	}
}