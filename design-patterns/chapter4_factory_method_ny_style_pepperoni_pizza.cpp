#include "chapter4_factory_method_ny_style_pizza.h"

namespace chapter4_factory_method {
	NYStylePepperoniPizza::NYStylePepperoniPizza() {
		this->name_ = "���� ��Ÿ�� ����δ� ����";
		this->dough_ = "�� ũ����Ʈ ����";
		this->sauce_ = "�������� �ҽ�";
		this->toppings_.push_back("�����Ƴ� ġ��");
		this->toppings_.push_back("����δ� �����̽�");
		this->toppings_.push_back("����");
		this->toppings_.push_back("����");
		this->toppings_.push_back("����");
		this->toppings_.push_back("����");
	}
}