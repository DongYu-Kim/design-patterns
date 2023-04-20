#include <iostream>
#include "chapter2_display.h"

namespace chapter2 {
	StatisticsDisplay::StatisticsDisplay(WeatherData* weather_data) {
		this->count_temperature_ = 0;
		this->max_temperature_ = -999.9;
		this->min_temperature_ = 999.9;
		this->weather_data_ = weather_data;
		this->weather_data_->RegisterObserver(this);
	}
	StatisticsDisplay::~StatisticsDisplay() {
		this->weather_data_->RemoveObserver(this);
	}
	void StatisticsDisplay::Update() {
		double temperature = this->weather_data_->GetTemperator();
		this->sum_temperature_ += temperature;
		this->count_temperature_++;
		if (temperature > this->max_temperature_) this->max_temperature_ = temperature;
		if (temperature < this->min_temperature_) this->min_temperature_ = temperature;
		this->Display();
	}
	void StatisticsDisplay::Display() {
		std::cout << "평균/최고/최저 온도 = " << this->sum_temperature_ / this->count_temperature_ << "/" << this->max_temperature_ << "/" << this->min_temperature_ << std::endl;
	}
}