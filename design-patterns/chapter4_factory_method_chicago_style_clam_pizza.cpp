#include "chapter4_factory_method_chicaco_style_pizza.h"

namespace chapter4_factory_method {
	ChicagoStyleClamPizza::ChicagoStyleClamPizza() {
		this->name_ = "��ī�� ��Ÿ�� ���� ����";
		this->dough_ = "�ſ� �β��� ũ����Ʈ ����";
		this->sauce_ = "���� �丶�� �ҽ�";
		this->toppings_.push_back("��¥���� ġ��");
		this->toppings_.push_back("ü����ũ �� �õ� ����");
	}
}