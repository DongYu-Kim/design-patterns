#pragma once
#include <vector>
#include <string>
#include "chapter6_macro_command_interface.h"

namespace chapter6_macro {
	class RemoteControl {
	private:
		std::vector<Command*> on_commands_;
		std::vector<Command*> off_commands_;
		Command* undo_command_ = nullptr;
	public:
		RemoteControl();
		~RemoteControl();
		void SetCommand(int slot, Command* on_command, Command* off_command);
		void OnButtonWasPushed(int slot);
		void OffButtonWasPushed(int slot);
		void UndoButtonWasPushed();
		std::string ToString();
	};
}