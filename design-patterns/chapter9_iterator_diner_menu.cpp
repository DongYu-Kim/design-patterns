#include <iostream>
#include "chapter9_iterator_menu.h"

namespace chapter9_iterator {
	DinerMenu::DinerMenu() {
		this->menu_items_ = new MenuItem * [DinerMenu::kMaxItems];
		this->AddItem("ä�� BLT", "(Fakin') ��п� ����߿� �丶�並 ����� ������", true, 2.99);
		this->AddItem("BLT", "��п� ����� & �丶�並 ����� ������", false, 2.99);
		this->AddItem("������ ����", "���ڻ������ �Բ� ������ ����", false, 3.29);
		this->AddItem("�ֵ���", "�ұݿ� ���� �����, ���, ����, ġ� ���� �ֵ���", false, 3.05);
		this->AddItem("�� ��ä�� ����", "���̹� ���� �� ��ä", true, 3.99);
		this->AddItem("�Ľ�Ÿ", "�������� �ҽ��� ����� ���İ�Ƽ�� ������� �� �� ����", true, 3.89);
	}
	DinerMenu::~DinerMenu() {
		while (this->number_of_items_--) {
			delete this->menu_items_[this->number_of_items_];
		}
		delete[] this->menu_items_;
	}
	void DinerMenu::AddItem(std::string name, std::string description, bool vegetarian, double price) {
		if (this->number_of_items_ >= DinerMenu::kMaxItems) std::cout << "�˼��մϴ�. �޴��� ���� á���ϴ�! �޴��� �׸��� �߰��� �� �����ϴ�." << std::endl;
		else {
			MenuItem* menu_item = new MenuItem(name, description, vegetarian, price);
			this->menu_items_[this->number_of_items_++] = menu_item;
		}
	}
	MenuItem** DinerMenu::GetMenuItems() {
		return this->menu_items_;
	}
	size_t DinerMenu::GetNumberOfItems() {
		return this->number_of_items_;
	}
	Iterator* DinerMenu::CreateIterator() {
		return new DinerMenuIterator(this->menu_items_, this->number_of_items_);
	}
}