#include "chapter4_factory_method_ny_style_pizza.h"

namespace chapter4_factory_method {
	NYStyleClamPizza::NYStyleClamPizza() {
		this->name_ = "���� ��Ÿ�� ���� ����";
		this->dough_ = "�� ũ����Ʈ ����";
		this->sauce_ = "�������� �ҽ�";
		this->toppings_.push_back("�����Ƴ� ġ��");
		this->toppings_.push_back("Long Island Sound�� �ż��� ����");
	}
}