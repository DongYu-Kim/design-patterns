#pragma once
#include <string>
#include "chapter6_macro_command_interface.h"

namespace chapter6_macro {
	class Light {
	private:
		std::string location_;
		int level_ = 0;
	public:
		Light(std::string location);
		void On();
		void Off();
		void Dim(int level);
		int GetLevel();
	};

	class CeilingFan {
	private:
		std::string location_;
		int speed_ = 0;
	public:
		static const int kHigh = 3;
		static const int kMedium = 2;
		static const int kLow = 1;
		static const int kOff = 0;

		CeilingFan(std::string location);
		void High();
		void Medium();
		void Low();
		void Off();
		int GetSpeed();
	};

	class Hottub {
	private:
		bool on_ = false;
		int temperature_ = 0;
	public:
		void On();
		void Off();
		void Circulate();
		void JetsOn();
		void JetsOff();
		void SetTemperature(int temperature);
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