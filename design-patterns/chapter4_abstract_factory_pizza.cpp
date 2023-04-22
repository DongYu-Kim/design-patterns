#include "chapter4_abstract_factory_pizza_interface.h"
#include <iostream>

namespace chapter4_abstract_factory {
	Pizza::~Pizza() {
		if (this->pizza_ingredient_factory_) delete this->pizza_ingredient_factory_;
		if (this->dough_) delete this->dough_;
		if (this->sauce_) delete this->sauce_;
		for (Veggies* veggie : this->veggies_) delete veggie;
		if (this->cheese_) delete this->cheese_;
		if (this->pepperoni_) delete this->pepperoni_;
		if (this->clam_) delete this->clam_;
	}
	void Pizza::Bake() {
		std::cout << "350에서 25분간 굽기" << std::endl;
	}
	void Pizza::Cut() {
		std::cout << "대각선으로 피자 자르기" << std::endl;
	}
	void Pizza::Box() {
		std::cout << "공식 피자가게 상자에 피자 담기" << std::endl;
	}
	void Pizza::SetName(std::string name) {
		this->name_ = name;
	}
	std::string Pizza::GetName() {
		return this->name_;
	}
	std::string Pizza::ToString() {
		std::string display = "---- " + this->name_ + " ----\n";
		if (this->dough_) display += this->dough_->ToString() + "\n";
		if (this->sauce_) display += this->sauce_->ToString() + "\n";
		if (this->cheese_) display += this->cheese_->ToString() + "\n";
		if (!this->veggies_.empty()) {
			for (Veggies* veggie : this->veggies_) {
				display += veggie->ToString() + ", ";
			}
			display += "\n";
		}
		if (this->pepperoni_) display += this->pepperoni_->ToString() + "\n";
		if (this->clam_) display += this->clam_->ToString() + "\n";
		return display;
	}
}