#include "chapter9_composite_menu_component.h"

namespace chapter9_composite {
	void MenuComponent::Add(MenuComponent* menu_component) {
		throw std::exception("�������� �ʴ� ����");
	}
	void MenuComponent::Remove(MenuComponent* menu_component) {
		throw std::exception("�������� �ʴ� ����");
	}
	MenuComponent* MenuComponent::GetChild(int i) {
		throw std::exception("�������� �ʴ� ����");
	}
	std::string MenuComponent::GetName() {
		throw std::exception("�������� �ʴ� ����");
	}
	std::string MenuComponent::GetDescription() {
		throw std::exception("�������� �ʴ� ����");
	}
	double MenuComponent::GetPrice() {
		throw std::exception("�������� �ʴ� ����");
	}
	bool MenuComponent::IsVegetarian() {
		throw std::exception("�������� �ʴ� ����");
	}
	void MenuComponent::Print() {
		throw std::exception("�������� �ʴ� ����");
	}
}