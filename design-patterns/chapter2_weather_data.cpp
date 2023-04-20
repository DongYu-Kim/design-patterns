#include "chapter2_weather_data.h"

namespace chapter2 {
	WeatherData::WeatherData() {
		this->observers_ = std::list<Observer*>();
	}
	void WeatherData::RegisterObserver(Observer* observer) {
		this->observers_.push_back(observer);
	}
	void WeatherData::RemoveObserver(Observer* observer) {
		this->observers_.remove(observer);
	}
	void WeatherData::NotifyObserver() {
		for (Observer* observer : this->observers_) {
			observer->Update();
		}
	}
	void WeatherData::MeasurementsChanged() {
		this->NotifyObserver();
	}
	void WeatherData::SetMeasurements(double temperatue, double humidity, double pressure) {
		this->temperature_ = temperatue;
		this->humidity_ = humidity;
		this->pressure_ = pressure;
		this->MeasurementsChanged();
	}
	double WeatherData::GetTemperator() {
		return this->temperature_;
	}
	double WeatherData::GetHumidity() {
		return this->humidity_;
	}
	double WeatherData::GetPressure() {
		return this->pressure_;
	}
}