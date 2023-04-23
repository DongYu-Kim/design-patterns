#include "chapter6_simple_remote_control.h"

namespace chapter6_simple_remote {
	void SimpleRemoteControl::SetCommand(Command* command) {
		this->slot_ = command;
	}
	void SimpleRemoteControl::ButtonWasPressed() {
		this->slot_->Execute();
	}
}