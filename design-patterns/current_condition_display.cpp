#include <iostream>
#include "chapter2_display.h"

namespace chapter2 {
	CurrentConditionDisplay::CurrentConditionDisplay(WeatherData* weather_data) {
		this->weather_data_ = weather_data;
		this->weather_data_->RegisterObserver(this);
	}
	CurrentConditionDisplay::~CurrentConditionDisplay() {
		this->weather_data_->RemoveObserver(this);
	}
	void CurrentConditionDisplay::Update() {
		this->temperature_ = this->weather_data_->GetTemperator();
		this->humidity_ = this->weather_data_->GetHumidity();
		this->Display();
	}
	void CurrentConditionDisplay::Display() {
		std::cout << "���� ���� : �µ� " << this->temperature_ << "F, ���� " << this->humidity_ << "%" << std::endl;
	}
}