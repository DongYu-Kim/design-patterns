#include "chapter4_simple_factory_pizza.h"

namespace chapter4_simple_factory {
	VeggiePizza::VeggiePizza() {
		this->name_ = "��ä ����";
		this->dough_ = "ũ����Ʈ";
		this->sauce_ = "�������� �ҽ�";
		this->toppings_.push_back("��©���� ġ��");
		this->toppings_.push_back("�ĸ��� ġ�� ����");
		this->toppings_.push_back("���� ����");
		this->toppings_.push_back("���� �����̽�");
		this->toppings_.push_back("���� �����̽�");
		this->toppings_.push_back("�� �ø��� �����̽�");
	}
}