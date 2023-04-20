#pragma once
#include "chapter2_observer_interface.h"
#include "chapter2_display_element_interface.h"
#include "chapter2_weather_data.h"

namespace chapter2 {
	class CurrentConditionDisplay : public Observer, public DisplayElement {
	private:
		double temperature_ = 0.0;
		double humidity_ = 0.0;
		WeatherData* weather_data_ = nullptr;
	public:
		CurrentConditionDisplay(WeatherData* weather_data);
		~CurrentConditionDisplay();
		virtual void Update() override;
		virtual void Display() override;
	};
	
	class StatisticsDisplay : public Observer, public DisplayElement {
	private:
		double max_temperature_ = 0.0;
		double min_temperature_ = 0.0;
		double sum_temperature_ = 0.0;
		int count_temperature_ = 0.0;
		WeatherData* weather_data_ = nullptr;
	public:
		StatisticsDisplay(WeatherData* weather_data);
		~StatisticsDisplay();
		virtual void Update() override;
		virtual void Display() override;
	};

	class ForecastDisplay : public Observer, public DisplayElement {
	private:
		bool is_update_init = false;
		double current_pressure_ = 0.0;
		double last_pressure_ = 0.0;
		WeatherData* weather_data_ = nullptr;
	public:
		ForecastDisplay(WeatherData* weather_data);
		~ForecastDisplay();
		virtual void Update() override;
		virtual void Display() override;
	};

	class HeatIndexDisplay : public Observer, public DisplayElement {
	private:
		double heat_index_ = 0.0f;
		WeatherData* weather_data_ = nullptr;
		static double ComputeHeatIndex(double temperature, double humidity);
	public:
		HeatIndexDisplay(WeatherData* weather_data);
		~HeatIndexDisplay();
		virtual void Update() override;
		virtual void Display() override;
	};
}