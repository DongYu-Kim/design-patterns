#include "chapter4_simple_factory_pizza.h"

namespace chapter4_simple_factory {
	PepperoniPizza::PepperoniPizza() {
		this->name_ = "����δ� ����";
		this->dough_ = "ũ����Ʈ";
		this->sauce_ = "�������� �ҽ�";
		this->toppings_.push_back("����δ� �����̽�");
		this->toppings_.push_back("���� �����̽�");
		this->toppings_.push_back("�ĸ��� ġ�� ����");
	}
}