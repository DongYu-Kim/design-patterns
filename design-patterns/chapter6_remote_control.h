#pragma once
#include <vector>
#include <string>
#include "chapter6_remote_command_interface.h"

namespace chapter6_remote {
	class RemoteControl {
	private:
		std::vector<Command*> on_commands_;
		std::vector<Command*> off_commands_;
	public:
		RemoteControl();
		~RemoteControl();
		void SetCommand(int slot, Command* on_command, Command* off_command);
		void OnButtonWasPushed(int slot);
		void OffButtonWasPushed(int slot);
		std::string ToString();
	};
}