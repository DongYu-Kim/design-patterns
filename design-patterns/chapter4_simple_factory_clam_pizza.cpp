#include "chapter4_simple_factory_pizza.h"

namespace chapter4_simple_factory {
	ClamPizza::ClamPizza() {
		this->name_ = "���� ����";
		this->dough_ = "�� ũ����Ʈ";
		this->sauce_ = "ȭ��Ʈ ���� �ҽ�";
		this->toppings_.push_back("����");
		this->toppings_.push_back("�ĸ��� ġ�� ����");
	}
}