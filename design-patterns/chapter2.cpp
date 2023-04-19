#include <iostream>
#include "chapter2_weather_data.h"
#include "chapter2_display.h"

namespace chapter2 {
	void main() {
		std::cout << "========== Chapter2 ==========" << std::endl;
		WeatherData weather_data;
		CurrentConditionDisplay current_condition_display = CurrentConditionDisplay(&weather_data);
		StatisticsDisplay statistics_display = StatisticsDisplay(&weather_data);
		ForecastDisplay forecast_display = ForecastDisplay(&weather_data);
		HeatIndexDisplay heat_index_display = HeatIndexDisplay(&weather_data);

		weather_data.SetMeasurements(80, 65, 30.4);
		weather_data.SetMeasurements(82, 70, 29.2);
		weather_data.SetMeasurements(78, 90, 29.2);
	}
}