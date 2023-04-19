#include <iostream>
#include "chapter2_display.h"

namespace chapter2 {
	HeatIndexDisplay::HeatIndexDisplay(Subject* subject) {
		this->subject_ = subject;
		this->subject_->RegisterObserver(this);
	}
	HeatIndexDisplay::~HeatIndexDisplay() {
		this->subject_->RemoveObserver(this);
	}
	void HeatIndexDisplay::Update(double temperature, double humidity, double pressure) {
		this->heat_index_ = HeatIndexDisplay::ComputeHeatIndex(temperature, humidity);
		this->Display();
	}
	void HeatIndexDisplay::Display() {
		std::cout << "체감 온도 : " << this->heat_index_ << std::endl;
	}
	double HeatIndexDisplay::ComputeHeatIndex(double temperature, double humidity) {
		return ((16.923 + (0.185212 * temperature) + (5.37941 * humidity) - (0.100254 * temperature * humidity)
			+ (0.00941695 * (temperature * temperature)) + (0.00728898 * (humidity * humidity))
			+ (0.000345372 * (temperature * temperature * humidity)) - (0.000814971 * (temperature * humidity * humidity)) +
			(0.0000102102 * (temperature * temperature * humidity * humidity)) - (0.000038646 * (temperature * temperature * temperature)) + (0.0000291583 *
				(humidity * humidity * humidity)) + (0.00000142721 * (temperature * temperature * temperature * humidity)) +
			(0.000000197483 * (temperature * humidity * humidity * humidity)) - (0.0000000218429 * (temperature * temperature * temperature * humidity * humidity)) +
			0.000000000843296 * (temperature * temperature * humidity * humidity * humidity)) -
			(0.0000000000481975 * (temperature * temperature * temperature * humidity * humidity * humidity)));
	}
}