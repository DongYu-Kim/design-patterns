#include <iostream>
#include "chapter4_simple_factory_pizza_store.h"
#include "chapter4_factory_method_pizza_store.h"
#include "chapter4_abstract_factory_pizza_store.h"

namespace chapter4 {
	void main() {
		std::cout << "========== Chapter4 ==========" << std::endl;
		//std::cout << "========== 간단한 팩토리 ==========" << std::endl;
		//chapter4_simple_factory::PizzaStore* store = new chapter4_simple_factory::PizzaStore(new chapter4_simple_factory::SimplePizzaFactory());
		//
		//chapter4_simple_factory::Pizza* pizza1 = store->OrderPizza("cheese");
		//std::cout << pizza1->GetName() << "를 주문했습니다." << std::endl;
		//std::cout << pizza1->ToString() << std::endl;

		//chapter4_simple_factory::Pizza* pizza2 = store->OrderPizza("veggie");
		//std::cout << pizza2->GetName() << "를 주문했습니다." << std::endl;
		//std::cout << pizza2->ToString() << std::endl;

		//delete store;
		//delete pizza1;
		//delete pizza2;

		//std::cout << "========== 팩토리 메소드 ==========" << std::endl;
		//chapter4_factory_method::NYPizzaStore* ny_pizza_store = new chapter4_factory_method::NYPizzaStore();
		//chapter4_factory_method::ChicagoPizzaStore* chicago_pizza_store = new chapter4_factory_method::ChicagoPizzaStore();
		//
		//chapter4_factory_method::Pizza* pizza3 = ny_pizza_store->OrderPizza("cheese");
		//std::cout << pizza3->GetName() << "를 주문했습니다." << std::endl;
		//std::cout << pizza3->ToString() << std::endl;

		//chapter4_factory_method::Pizza* pizza4 = ny_pizza_store->OrderPizza("cheese");
		//std::cout << pizza4->GetName() << "를 주문했습니다." << std::endl;
		//std::cout << pizza4->ToString() << std::endl;

		//chapter4_factory_method::Pizza* pizza5 = ny_pizza_store->OrderPizza("cheese");
		//std::cout << pizza5->GetName() << "를 주문했습니다." << std::endl;
		//std::cout << pizza5->ToString() << std::endl;

		//chapter4_factory_method::Pizza* pizza6 = ny_pizza_store->OrderPizza("cheese");
		//std::cout << pizza6->GetName() << "를 주문했습니다." << std::endl;
		//std::cout << pizza6->ToString() << std::endl;

		//chapter4_factory_method::Pizza* pizza7 = ny_pizza_store->OrderPizza("cheese");
		//std::cout << pizza7->GetName() << "를 주문했습니다." << std::endl;
		//std::cout << pizza7->ToString() << std::endl;

		//chapter4_factory_method::Pizza* pizza8 = ny_pizza_store->OrderPizza("cheese");
		//std::cout << pizza8->GetName() << "를 주문했습니다." << std::endl;
		//std::cout << pizza8->ToString() << std::endl;

		//chapter4_factory_method::Pizza* pizza9 = ny_pizza_store->OrderPizza("cheese");
		//std::cout << pizza9->GetName() << "를 주문했습니다." << std::endl;
		//std::cout << pizza9->ToString() << std::endl;

		//chapter4_factory_method::Pizza* pizza10 = ny_pizza_store->OrderPizza("cheese");
		//std::cout << pizza10->GetName() << "를 주문했습니다." << std::endl;
		//std::cout << pizza10->ToString() << std::endl;
		//
		//delete ny_pizza_store;
		//delete chicago_pizza_store;
		//delete pizza3;
		//delete pizza4;
		//delete pizza5;
		//delete pizza6;
		//delete pizza7;
		//delete pizza8;
		//delete pizza9;
		//delete pizza10;

		std::cout << "========== 추상 팩토리 ==========" << std::endl;
		chapter4_abstract_factory::PizzaStore* ny_pizza_store2 = new chapter4_abstract_factory::NYPizzaStore();
		chapter4_abstract_factory::PizzaStore* chicago_pizza_store2 = new chapter4_abstract_factory::ChicagoPizzaStore();

		chapter4_abstract_factory::Pizza* pizza11 = ny_pizza_store2->OrderPizza("cheese");
		std::cout << pizza11->GetName() << "를 주문했습니다." << std::endl;
		std::cout << pizza11->ToString() << std::endl;

		chapter4_abstract_factory::Pizza* pizza12 = chicago_pizza_store2->OrderPizza("cheese");
		std::cout << pizza12->GetName() << "를 주문했습니다." << std::endl;
		std::cout << pizza12->ToString() << std::endl;

		chapter4_abstract_factory::Pizza* pizza13 = ny_pizza_store2->OrderPizza("clam");
		std::cout << pizza13->GetName() << "를 주문했습니다." << std::endl;
		std::cout << pizza13->ToString() << std::endl;

		chapter4_abstract_factory::Pizza* pizza14 = chicago_pizza_store2->OrderPizza("clam");
		std::cout << pizza14->GetName() << "를 주문했습니다." << std::endl;
		std::cout << pizza14->ToString() << std::endl;

		chapter4_abstract_factory::Pizza* pizza15 = ny_pizza_store2->OrderPizza("pepperoni");
		std::cout << pizza15->GetName() << "를 주문했습니다." << std::endl;
		std::cout << pizza15->ToString() << std::endl;

		chapter4_abstract_factory::Pizza* pizza16 = chicago_pizza_store2->OrderPizza("pepperoni");
		std::cout << pizza16->GetName() << "를 주문했습니다." << std::endl;
		std::cout << pizza16->ToString() << std::endl;

		chapter4_abstract_factory::Pizza* pizza17 = ny_pizza_store2->OrderPizza("veggie");
		std::cout << pizza17->GetName() << "를 주문했습니다." << std::endl;
		std::cout << pizza17->ToString() << std::endl;

		chapter4_abstract_factory::Pizza* pizza18 = chicago_pizza_store2->OrderPizza("veggie");
		std::cout << pizza18->GetName() << "를 주문했습니다." << std::endl;
		std::cout << pizza18->ToString() << std::endl;

		delete ny_pizza_store2;
		delete chicago_pizza_store2;
		delete pizza11;
		delete pizza12;
		delete pizza13;
		delete pizza14;
		delete pizza15;
		delete pizza16;
		delete pizza17;
		delete pizza18;
	}
}