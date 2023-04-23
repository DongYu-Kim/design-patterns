#include <iostream>
#include "chapter5_singleton_chocolate_boiler.h"

namespace chapter5 {
	ChocolateBoiler* ChocolateBoiler::unique_instance_ = nullptr;
	ChocolateBoiler::ChocolateBoiler() {
		this->empty_ = true;
		this->boiled_ = false;
	}
	ChocolateBoiler* ChocolateBoiler::GetInstance() {
		if (!ChocolateBoiler::unique_instance_) {
			std::cout << "���ݸ� ���Ϸ� ������ �ν��Ͻ� ����" << std::endl;
			ChocolateBoiler::unique_instance_ = new ChocolateBoiler();
		}
		std::cout << "���ݸ� ���Ϸ� �ν��Ͻ� ��ȯ" << std::endl;
		return ChocolateBoiler::unique_instance_;
	}
	void ChocolateBoiler::Fill() {
		if (this->IsEmpty()) {
			this->empty_ = false;
			this->boiled_ = false;
		}
	}
	void ChocolateBoiler::Drain() {
		if (!this->IsEmpty() && this->IsBoiled()) {
			this->empty_ = true;
		}
	}
	void ChocolateBoiler::Boil() {
		if (!this->IsEmpty() && !this->IsBoiled()) {
			this->boiled_ = true;
		}
	}
	bool ChocolateBoiler::IsEmpty() {
		return this->empty_;
	}
	bool ChocolateBoiler::IsBoiled() {
		return this->boiled_;
	}
}