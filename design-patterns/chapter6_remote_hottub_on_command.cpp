#include "chapter6_remote_command.h"

namespace chapter6_remote {
	HottubOnCommand::HottubOnCommand(Hottub* hottub) {
		this->hottub_ = hottub;
	}
	void HottubOnCommand::Execute() {
		this->hottub_->On();
		this->hottub_->Heat();
		this->hottub_->BubblesOn();
	}
}