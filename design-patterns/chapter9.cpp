#include <iostream>
#include "chapter9_iterator_menu.h"
#include "chapter9_iterator_waitress.h"
#include "chapter9_composite_menu.h"
#include "chapter9_composite_waitress.h"

namespace chapter9 {
	static void PrintMenus();
	void main() {
		std::cout << "========== Chapter9 ==========" << std::endl;
		std::cout << "========== Iterator ==========" << std::endl;
		chapter9_iterator::Menu* pancake_house_menu = new chapter9_iterator::PancakeHouseMenu();
		chapter9_iterator::Menu* diner_menu = new chapter9_iterator::DinerMenu();
		chapter9_iterator::Waitress* waitress = new chapter9_iterator::Waitress(pancake_house_menu, diner_menu);
		waitress->PrintMenu();
		PrintMenus();

		delete pancake_house_menu;
		delete diner_menu;
		delete waitress;

		std::cout << "========== Composite ==========" << std::endl;
		chapter9_composite::MenuComponent* pancake_house_menu2 = new chapter9_composite::Menu("팬 케이크 하우스 메뉴", "아침");
		chapter9_composite::MenuComponent* diner_menu2 = new chapter9_composite::Menu("저녁 메뉴", "점심");
		chapter9_composite::MenuComponent* cafe_menu2 = new chapter9_composite::Menu("카페 메뉴", "저녁");
		chapter9_composite::MenuComponent* dessert_menu2 = new chapter9_composite::Menu("디저트 메뉴", "디저트 코스");
		chapter9_composite::MenuComponent* coffee_menu2 = new chapter9_composite::Menu("커피 메뉴", "오후의 커피와 함께 할 것들");
		chapter9_composite::MenuComponent* all_menus2 = new chapter9_composite::Menu("모든 메뉴", "모든 메뉴 합체");
		all_menus2->Add(pancake_house_menu2);
		all_menus2->Add(diner_menu2);
		all_menus2->Add(cafe_menu2);
		pancake_house_menu2->Add(new chapter9_composite::MenuItem(
			"K&B의 팬케이크 브렉퍼스트", "스크램블 에그와 토스트를 곁들인 팬케이크", true, 2.99
		));
		pancake_house_menu2->Add(new chapter9_composite::MenuItem(
			"일반 팬케이크 조식", "튀긴 계란, 소시지 팬케이크", false, 2.99
		));
		pancake_house_menu2->Add(new chapter9_composite::MenuItem(
			"블루베리 팬케이크", "신선한 블루베리로 만든 팬케이크", true, 3.49
		));
		pancake_house_menu2->Add(new chapter9_composite::MenuItem(
			"와플", "블루베리 또는 딸기 중 선택 가능한 와플", true, 3.59
		));
		diner_menu2->Add(new chapter9_composite::MenuItem(
			"채식 BLT", "(Fakin') 통밀에 양상추와 토마토를 곁들인 베이컨", true, 2.99
		));
		diner_menu2->Add(new chapter9_composite::MenuItem(
			"BLT", "통밀에 양상추 & 토마토를 곁들인 베이컨", false, 2.99
		));
		diner_menu2->Add(new chapter9_composite::MenuItem(
			"오늘의 수프", "감자샐러드와 함께 오늘의 수프", false, 3.29
		));
		diner_menu2->Add(new chapter9_composite::MenuItem(
			"핫도그", "소금에 절인 양배추, 양념, 양파, 치즈를 얹은 핫도그", false, 3.05
		));
		diner_menu2->Add(new chapter9_composite::MenuItem(
			"찐 야채와 현미", "현미밥 위에 찐 야채", true, 3.99
		));
		diner_menu2->Add(new chapter9_composite::MenuItem(
			"파스타", "마리나라 소스를 곁들인 스파게티와 사워도우 빵 한 조각", true, 3.89
		));
		diner_menu2->Add(dessert_menu2);
		dessert_menu2->Add(new chapter9_composite::MenuItem(
			"사과 파이", "Apple pie with a flakey crust, topped with vanilla icecream", true, 1.59
		));
		dessert_menu2->Add(new chapter9_composite::MenuItem(
			"치즈케이크", "초콜릿 그레이엄 크러스트가 들어간 크리미한 뉴욕 치즈케이크", true, 1.99
		));
		dessert_menu2->Add(new chapter9_composite::MenuItem(
			"셔벗", "라즈베리 한 스쿱과 라임 한 스쿱", true, 1.89
		));
		cafe_menu2->Add(new chapter9_composite::MenuItem(
			"야채 버거와 에어프라이", "통밀빵, 양상추, 토마토, 감자튀김 위에 야채 버거", true, 3.99
		));
		cafe_menu2->Add(new chapter9_composite::MenuItem(
			"오늘의 수프", "사이드 샐러드와 함께 오늘의 수프 한잔", false, 3.69
		));
		cafe_menu2->Add(new chapter9_composite::MenuItem(
			"부리또", "통 핀토 빈, 살사, 과카몰리를 곁들인 라지 부리또", true, 4.29
		));
		cafe_menu2->Add(coffee_menu2);
		coffee_menu2->Add(new chapter9_composite::MenuItem(
			"커피 케이크", "계피와 호두를 얹은 부서지기 쉬운 케이크", true, 1.59
		));
		coffee_menu2->Add(new chapter9_composite::MenuItem(
			"베이글", "참깨 맛, 양귀비 씨 맛, 계피 건포도 맛, 호박 맛", false, 0.69
		));
		coffee_menu2->Add(new chapter9_composite::MenuItem(
			"비스코티", "아몬드 또는 헤이즐넛 비스코티 쿠키 3개", true, 0.89
		));
		chapter9_composite::Waitress* waitress2 = new chapter9_composite::Waitress(all_menus2);
		waitress2->PrintMenu();
		delete waitress2;
	}
	void PrintMenus() {
		chapter9_iterator::PancakeHouseMenu* pancake_house_menu = new chapter9_iterator::PancakeHouseMenu();
		chapter9_iterator::DinerMenu* diner_menu = new chapter9_iterator::DinerMenu();

		std::vector<chapter9_iterator::MenuItem*> breakfast_items = pancake_house_menu->GetMenuItems();
		chapter9_iterator::MenuItem** lunch_items = diner_menu->GetMenuItems();
		int number_of_lunch_items = diner_menu->GetNumberOfItems();

		for (auto menu_item : breakfast_items) {
			std::cout << menu_item->GetName() + "\t\t";
			std::cout << menu_item->GetPrice() << std::endl;
			std::cout << "\t" + menu_item->GetDescription() << std::endl;
		}
		for (int i = 0; i < number_of_lunch_items; i++) {
			chapter9_iterator::MenuItem* menu_item = lunch_items[i];
			std::cout << menu_item->GetName() + "\t\t";
			std::cout << menu_item->GetPrice() << std::endl;
			std::cout << "\t" + menu_item->GetDescription() << std::endl;
		}

		delete pancake_house_menu;
		delete diner_menu;
	}
}