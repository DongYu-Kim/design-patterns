#include <iostream>
#include "chapter4_simple_factory_pizza_store.h";

namespace chapter4 {
	void main() {
		std::cout << "========== Chapter4 ==========" << std::endl;
		chapter4_simple_factory::PizzaStore* store = new chapter4_simple_factory::PizzaStore(new chapter4_simple_factory::SimplePizzaFactory());
		
		chapter4_simple_factory::Pizza* pizza1 = store->OrderPizza("cheese");
		std::cout << pizza1->GetName() << "를 주문했습니다." << std::endl;
		std::cout << pizza1->ToString() << std::endl;

		chapter4_simple_factory::Pizza* pizza2 = store->OrderPizza("veggie");
		std::cout << pizza2->GetName() << "를 주문했습니다." << std::endl;
		std::cout << pizza2->ToString() << std::endl;

		delete store;
		delete pizza1;
		delete pizza2;
	}
}