#include "chapter9_composite_menu_component.h"

namespace chapter9_composite {
	void MenuComponent::Add(MenuComponent* menu_component) {
		throw std::exception("지원하지 않는 연산");
	}
	void MenuComponent::Remove(MenuComponent* menu_component) {
		throw std::exception("지원하지 않는 연산");
	}
	MenuComponent* MenuComponent::GetChild(int i) {
		throw std::exception("지원하지 않는 연산");
	}
	std::string MenuComponent::GetName() {
		throw std::exception("지원하지 않는 연산");
	}
	std::string MenuComponent::GetDescription() {
		throw std::exception("지원하지 않는 연산");
	}
	double MenuComponent::GetPrice() {
		throw std::exception("지원하지 않는 연산");
	}
	bool MenuComponent::IsVegetarian() {
		throw std::exception("지원하지 않는 연산");
	}
	void MenuComponent::Print() {
		throw std::exception("지원하지 않는 연산");
	}
}