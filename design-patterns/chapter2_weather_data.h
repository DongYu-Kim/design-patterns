#pragma once
#include <list>
#include "chapter2_subject_interface.h"
#include "chapter2_observer_interface.h"

namespace chapter2 {
	class WeatherData : public Subject {
	private:
		std::list<Observer*> observers_;
		double temperature_ = 0.0;
		double humidity_ = 0.0;
		double pressure_ = 0.0;

		void MeasurementsChanged();
		virtual void NotifyObserver() override;
	public:
		WeatherData();
		double GetTemperator();
		double GetHumidity();
		double GetPressure();

		virtual void RegisterObserver(Observer* observer) override;
		virtual void RemoveObserver(Observer* observer) override;
		void SetMeasurements(double temperatue, double humidity, double pressure);
	};
}