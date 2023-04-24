#pragma once
#include <string>
#include "chapter6_remote_with_undo_command_interface.h"

namespace chapter6_remote_with_undo {
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
}