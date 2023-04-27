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
		chapter9_composite::MenuComponent* pancake_house_menu2 = new chapter9_composite::Menu("�� ����ũ �Ͽ콺 �޴�", "��ħ");
		chapter9_composite::MenuComponent* diner_menu2 = new chapter9_composite::Menu("���� �޴�", "����");
		chapter9_composite::MenuComponent* cafe_menu2 = new chapter9_composite::Menu("ī�� �޴�", "����");
		chapter9_composite::MenuComponent* dessert_menu2 = new chapter9_composite::Menu("����Ʈ �޴�", "����Ʈ �ڽ�");
		chapter9_composite::MenuComponent* coffee_menu2 = new chapter9_composite::Menu("Ŀ�� �޴�", "������ Ŀ�ǿ� �Բ� �� �͵�");
		chapter9_composite::MenuComponent* all_menus2 = new chapter9_composite::Menu("��� �޴�", "��� �޴� ��ü");
		all_menus2->Add(pancake_house_menu2);
		all_menus2->Add(diner_menu2);
		all_menus2->Add(cafe_menu2);
		pancake_house_menu2->Add(new chapter9_composite::MenuItem(
			"K&B�� ������ũ �귺�۽�Ʈ", "��ũ���� ���׿� �佺Ʈ�� ����� ������ũ", true, 2.99
		));
		pancake_house_menu2->Add(new chapter9_composite::MenuItem(
			"�Ϲ� ������ũ ����", "Ƣ�� ���, �ҽ��� ������ũ", false, 2.99
		));
		pancake_house_menu2->Add(new chapter9_composite::MenuItem(
			"��纣�� ������ũ", "�ż��� ��纣���� ���� ������ũ", true, 3.49
		));
		pancake_house_menu2->Add(new chapter9_composite::MenuItem(
			"����", "��纣�� �Ǵ� ���� �� ���� ������ ����", true, 3.59
		));
		diner_menu2->Add(new chapter9_composite::MenuItem(
			"ä�� BLT", "(Fakin') ��п� ����߿� �丶�並 ����� ������", true, 2.99
		));
		diner_menu2->Add(new chapter9_composite::MenuItem(
			"BLT", "��п� ����� & �丶�並 ����� ������", false, 2.99
		));
		diner_menu2->Add(new chapter9_composite::MenuItem(
			"������ ����", "���ڻ������ �Բ� ������ ����", false, 3.29
		));
		diner_menu2->Add(new chapter9_composite::MenuItem(
			"�ֵ���", "�ұݿ� ���� �����, ���, ����, ġ� ���� �ֵ���", false, 3.05
		));
		diner_menu2->Add(new chapter9_composite::MenuItem(
			"�� ��ä�� ����", "���̹� ���� �� ��ä", true, 3.99
		));
		diner_menu2->Add(new chapter9_composite::MenuItem(
			"�Ľ�Ÿ", "�������� �ҽ��� ����� ���İ�Ƽ�� ������� �� �� ����", true, 3.89
		));
		diner_menu2->Add(dessert_menu2);
		dessert_menu2->Add(new chapter9_composite::MenuItem(
			"��� ����", "Apple pie with a flakey crust, topped with vanilla icecream", true, 1.59
		));
		dessert_menu2->Add(new chapter9_composite::MenuItem(
			"ġ������ũ", "���ݸ� �׷��̾� ũ����Ʈ�� �� ũ������ ���� ġ������ũ", true, 1.99
		));
		dessert_menu2->Add(new chapter9_composite::MenuItem(
			"�Ź�", "����� �� ����� ���� �� ����", true, 1.89
		));
		cafe_menu2->Add(new chapter9_composite::MenuItem(
			"��ä ���ſ� ����������", "��л�, �����, �丶��, ����Ƣ�� ���� ��ä ����", true, 3.99
		));
		cafe_menu2->Add(new chapter9_composite::MenuItem(
			"������ ����", "���̵� ������� �Բ� ������ ���� ����", false, 3.69
		));
		cafe_menu2->Add(new chapter9_composite::MenuItem(
			"�θ���", "�� ���� ��, ���, ��ī������ ����� ���� �θ���", true, 4.29
		));
		cafe_menu2->Add(coffee_menu2);
		coffee_menu2->Add(new chapter9_composite::MenuItem(
			"Ŀ�� ����ũ", "���ǿ� ȣ�θ� ���� �μ����� ���� ����ũ", true, 1.59
		));
		coffee_menu2->Add(new chapter9_composite::MenuItem(
			"���̱�", "���� ��, ��ͺ� �� ��, ���� ������ ��, ȣ�� ��", false, 0.69
		));
		coffee_menu2->Add(new chapter9_composite::MenuItem(
			"����Ƽ", "�Ƹ�� �Ǵ� ������� ����Ƽ ��Ű 3��", true, 0.89
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