#include <iostream>
#include "chapter2_display.h"

namespace chapter2 {
	ForecastDisplay::ForecastDisplay(Subject* subject) {
		this->is_update_init = false;
		this->subject_ = subject;
		this->subject_->RegisterObserver(this);
	}
	ForecastDisplay::~ForecastDisplay() {
		this->subject_->RemoveObserver(this);
	}
	void ForecastDisplay::Update(double temperature, double humidity, double pressure) {
		if (this->is_update_init) this->last_pressure_ = this->current_pressure_;
		else this->last_pressure_ = pressure;
		this->current_pressure_ = pressure;
		this->is_update_init = true;
		this->Display();
	}
	void ForecastDisplay::Display() {
		std::cout << "��� ���� : ";
		double difference_pressure = this->current_pressure_ - this->last_pressure_;
		if (difference_pressure > 1.0) std::cout << "������ �������� �ֽ��ϴ�!";
		else if (difference_pressure < -1.0) std::cout << "�ҽ��ϸ� �� �� �� �����ϴ�.";
		else std::cout << "���ݰ� ����� �� �����ϴ�";
		std::cout << std::endl;
	}
}