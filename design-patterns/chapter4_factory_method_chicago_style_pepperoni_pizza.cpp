#include "chapter4_factory_method_chicaco_style_pizza.h"

namespace chapter4_factory_method {
	ChicagoStylePepperoniPizza::ChicagoStylePepperoniPizza() {
		this->name_ = "��ī�� ��Ÿ�� ����δ� ����";
		this->dough_ = "�ſ� �β��� ũ����Ʈ ����";
		this->sauce_ = "���� �丶�� �ҽ�";
		this->toppings_.push_back("��¥���� ġ��");
		this->toppings_.push_back("���ø���");
		this->toppings_.push_back("�ñ�ġ");
		this->toppings_.push_back("����");
		this->toppings_.push_back("����δ� �����̽�");
	}
}