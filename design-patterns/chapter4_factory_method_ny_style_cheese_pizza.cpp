#include "chapter4_factory_method_ny_style_pizza.h"

namespace chapter4_factory_method {
	NYStyleCheesePizza::NYStyleCheesePizza() {
		this->name_ = "���� ��Ÿ�� �ҽ� ġ�� ����";
		this->dough_ = "�� ũ����Ʈ ����";
		this->sauce_ = "�������� �ҽ�";
		this->toppings_.push_back("�����Ƴ� ġ��");
	}
}