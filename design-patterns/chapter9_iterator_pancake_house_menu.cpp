#include "chapter9_iterator_menu.h"

namespace chapter9_iterator {
	PancakeHouseMenu::PancakeHouseMenu() {
		this->menu_items_ = std::vector<MenuItem*>();
		this->AddItem("K&B�� ������ũ �귺�۽�Ʈ", "��ũ���� ���׿� �佺Ʈ�� ����� ������ũ", true, 2.99);
		this->AddItem("�Ϲ� ������ũ ����", "Ƣ�� ���, �ҽ��� ������ũ", false, 2.99);
		this->AddItem("��纣�� ������ũ", "�ż��� ��纣���� ���� ������ũ", true, 3.49);
		this->AddItem("����", "��纣�� �Ǵ� ���� �� ���� ������ ����", true, 3.59);
	}
	PancakeHouseMenu::~PancakeHouseMenu() {
		for (MenuItem* menu_item : this->menu_items_) {
			delete menu_item;
		}
	}
	void PancakeHouseMenu::AddItem(std::string name, std::string description, bool vegetarian, double price) {
		this->menu_items_.push_back(new MenuItem(name, description, vegetarian, price));
	}
	std::vector<MenuItem*>& PancakeHouseMenu::GetMenuItems() {
		return this->menu_items_;
	}
	Iterator* PancakeHouseMenu::CreateIterator() {
		return new PancakeHouseMenuIterator(&this->menu_items_);
	}
	std::string PancakeHouseMenu::ToString() {
		return "������Ʈ�� ������ũ �Ͽ콺 �޴�";
	}
}