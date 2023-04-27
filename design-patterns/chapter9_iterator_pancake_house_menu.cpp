#include "chapter9_iterator_menu.h"

namespace chapter9_iterator {
	PancakeHouseMenu::PancakeHouseMenu() {
		this->menu_items_ = std::vector<MenuItem*>();
		this->AddItem("K&B의 팬케이크 브렉퍼스트", "스크램블 에그와 토스트를 곁들인 팬케이크", true, 2.99);
		this->AddItem("일반 팬케이크 조식", "튀긴 계란, 소시지 팬케이크", false, 2.99);
		this->AddItem("블루베리 팬케이크", "신선한 블루베리로 만든 팬케이크", true, 3.49);
		this->AddItem("와플", "블루베리 또는 딸기 중 선택 가능한 와플", true, 3.59);
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
		return "오브젝트빌 팬케이크 하우스 메뉴";
	}
}