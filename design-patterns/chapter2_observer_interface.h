#pragma once

namespace chapter2 {
	class Observer {
	public:
		virtual void Update(double temperature, double humidity, double pressure) = 0;
	};
}