#include "chapter9_composite_waitress.h"

namespace chapter9_composite {
	Waitress::Waitress(MenuComponent* all_menus) {
		this->all_menus_ = all_menus;
	}
	Waitress::~Waitress() {
		delete this->all_menus_;
	}
	void Waitress::PrintMenu() {
		this->all_menus_->Print();
	}
}