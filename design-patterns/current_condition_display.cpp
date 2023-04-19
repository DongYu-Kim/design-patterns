#include <iostream>
#include "chapter2_display.h"

namespace chapter2 {
	CurrentConditionDisplay::CurrentConditionDisplay(Subject* subject) {
		this->subject_ = subject;
		this->subject_->RegisterObserver(this);
	}
	CurrentConditionDisplay::~CurrentConditionDisplay() {
		this->subject_->RemoveObserver(this);
	}
	void CurrentConditionDisplay::Update(double temperature, double humidity, double pressure) {
		this->temperature_ = temperature;
		this->humidity_ = humidity;
		this->Display();
	}
	void CurrentConditionDisplay::Display() {
		std::cout << "현재 상태 : 온도 " << this->temperature_ << "F, 습도 " << this->humidity_ << "%" << std::endl;
	}
}