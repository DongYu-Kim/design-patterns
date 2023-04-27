#include <iostream>
#include "chapter9_iterator_menu.h"

namespace chapter9_iterator {
	DinerMenu::DinerMenu() {
		this->menu_items_ = new MenuItem * [DinerMenu::kMaxItems];
		this->AddItem("채식 BLT", "(Fakin') 통밀에 양상추와 토마토를 곁들인 베이컨", true, 2.99);
		this->AddItem("BLT", "통밀에 양상추 & 토마토를 곁들인 베이컨", false, 2.99);
		this->AddItem("오늘의 수프", "감자샐러드와 함께 오늘의 수프", false, 3.29);
		this->AddItem("핫도그", "소금에 절인 양배추, 양념, 양파, 치즈를 얹은 핫도그", false, 3.05);
		this->AddItem("찐 야채와 현미", "현미밥 위에 찐 야채", true, 3.99);
		this->AddItem("파스타", "마리나라 소스를 곁들인 스파게티와 사워도우 빵 한 조각", true, 3.89);
	}
	DinerMenu::~DinerMenu() {
		while (this->number_of_items_--) {
			delete this->menu_items_[this->number_of_items_];
		}
		delete[] this->menu_items_;
	}
	void DinerMenu::AddItem(std::string name, std::string description, bool vegetarian, double price) {
		if (this->number_of_items_ >= DinerMenu::kMaxItems) std::cout << "죄송합니다. 메뉴가 가득 찼습니다! 메뉴에 항목을 추가할 수 없습니다." << std::endl;
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