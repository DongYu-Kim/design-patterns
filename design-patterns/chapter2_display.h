#pragma once
#include "chapter2_observer_interface.h"
#include "chapter2_display_element_interface.h"
#include "chapter2_subject_interface.h"

namespace chapter2 {
	class CurrentConditionDisplay : public Observer, public DisplayElement {
	private:
		double temperature_ = 0.0;
		double humidity_ = 0.0;
		Subject* subject_ = nullptr;
	public:
		CurrentConditionDisplay(Subject* subject);
		~CurrentConditionDisplay();
		virtual void Update(double temperature, double humidity, double pressure) override;
		virtual void Display() override;
	};
	
	class StatisticsDisplay : public Observer, public DisplayElement {
	private:
		double max_temperature_ = 0.0;
		double min_temperature_ = 0.0;
		double sum_temperature_ = 0.0;
		int count_temperature_ = 0.0;
		Subject* subject_ = nullptr;
	public:
		StatisticsDisplay(Subject* subject);
		~StatisticsDisplay();
		virtual void Update(double temperature, double humidity, double pressure) override;
		virtual void Display() override;
	};

	class ForecastDisplay : public Observer, public DisplayElement {
	private:
		bool is_update_init = false;
		double current_pressure_ = 0.0;
		double last_pressure_ = 0.0;
		Subject* subject_ = nullptr;
	public:
		ForecastDisplay(Subject* subject);
		~ForecastDisplay();
		virtual void Update(double temperature, double humidity, double pressure) override;
		virtual void Display() override;
	};

	class HeatIndexDisplay : public Observer, public DisplayElement {
	private:
		double heat_index_ = 0.0f;
		Subject* subject_ = nullptr;
		static double ComputeHeatIndex(double temperature, double humidity);
	public:
		HeatIndexDisplay(Subject* subject);
		~HeatIndexDisplay();
		virtual void Update(double temperature, double humidity, double pressure) override;
		virtual void Display() override;
	};
}