#include "chapter4_factory_method_ny_style_pizza.h"

namespace chapter4_factory_method {
	NYStyleVeggiePizza::NYStyleVeggiePizza() {
		this->name_ = "���� ��Ÿ�� ��ä ����";
		this->dough_ = "�� ũ����Ʈ ����";
		this->sauce_ = "�������� �ҽ�";
		this->toppings_.push_back("�����Ƴ� ġ��");
		this->toppings_.push_back("����");
		this->toppings_.push_back("����");
		this->toppings_.push_back("����");
		this->toppings_.push_back("����");
	}
}