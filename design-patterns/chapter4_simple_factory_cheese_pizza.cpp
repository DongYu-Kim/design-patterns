#include "chapter4_simple_factory_pizza.h"

namespace chapter4_simple_factory {
	CheesePizza::CheesePizza() {
		this->name_ = "ġ�� ����";
		this->dough_ = "���ַ� ũ����Ʈ";
		this->sauce_ = "�������� ���� �ҽ�";
		this->toppings_.push_back("�ż��� ��¥���� ġ��");
		this->toppings_.push_back("�ĸ��� ġ��");
	}
}