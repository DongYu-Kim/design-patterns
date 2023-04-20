#include <iostream>
#include "chapter2_display.h"

namespace chapter2 {
	ForecastDisplay::ForecastDisplay(WeatherData* weather_data) {
		this->is_update_init = false;
		this->weather_data_ = weather_data;
		this->weather_data_->RegisterObserver(this);
	}
	ForecastDisplay::~ForecastDisplay() {
		this->weather_data_->RemoveObserver(this);
	}
	void ForecastDisplay::Update() {
		if (this->is_update_init) this->last_pressure_ = this->current_pressure_;
		else this->last_pressure_ = this->weather_data_->GetPressure();
		this->current_pressure_ = this->weather_data_->GetPressure();
		this->is_update_init = true;
		this->Display();
	}
	void ForecastDisplay::Display() {
		std::cout << "기상 예보 : ";
		double difference_pressure = this->current_pressure_ - this->last_pressure_;
		if (difference_pressure > 1.0) std::cout << "날씨가 좋아지고 있습니다!";
		else if (difference_pressure < -1.0) std::cout << "쌀쌀하며 비가 올 것 같습니다.";
		else std::cout << "지금과 비슷할 것 같습니다";
		std::cout << std::endl;
	}
}