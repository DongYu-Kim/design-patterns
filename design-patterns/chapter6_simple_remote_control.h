#pragma once
#include "chapter6_simple_remote_command_interface.h"

namespace chapter6_simple_remote {
	class SimpleRemoteControl {
	private:
		Command* slot_;
	public:
		void SetCommand(Command* command);
		void ButtonWasPressed();
	};
}