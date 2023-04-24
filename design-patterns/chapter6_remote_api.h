#pragma once
#include <string>
#include "chapter6_remote_command_interface.h"

namespace chapter6_remote {
	class Light {
	private:
		std::string location_;
	public:
		Light(std::string location);
		void On();
		void Off();
	};

	class GarageDoor {
	private:
		std::string location_;
	public:
		GarageDoor(std::string location);
		void Up();
		void Down();
		void Stop();
		void LightOn();
		void LightOff();
	};

	class CeilingFan {
	private:
		std::string location_;
		int level_ = 0;
	public:
		const static int kHigh = 3;
		const static int kMedium = 2;
		const static int kLow = 1;
		const static int kOff = 0;

		CeilingFan(std::string location);
		void High();
		void Medium();
		void Low();
		void Off();
		int GetSpeed();
	};

	class Stereo {
	private:
		std::string location_;
	public:
		Stereo(std::string location);
		void On();
		void Off();
		void SetCD();
		void SetDVD();
		void SetRadio();
		void SetVolume(int volume);
	};

	class Hottub {
	private:
		bool on_ = false;
		int temperature_ = 0;
	public:
		void On();
		void Off();
		void BubblesOn();
		void BubblesOff();
		void JetsOn();
		void JetsOff();
		void SetTemperature(int temperature);
		void Heat();
		void Cool();
	};

	class TV {
	private:
		std::string location_;
		int channel_ = 0;
	public:
		TV(std::string location);
		void On();
		void Off();
		void SetInputChannel();
	};
}