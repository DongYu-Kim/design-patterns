#pragma once

namespace chapter6_simple_remote {
	class Light {
	public:
		void On();
		void Off();
	};

	class GarageDoor {
	public:
		void Up();
		void Down();
		void Stop();
		void LightOn();
		void LightOff();
	};
}