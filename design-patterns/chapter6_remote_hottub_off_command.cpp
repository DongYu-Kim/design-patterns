#include "chapter6_remote_command.h"

namespace chapter6_remote {
	HottubOffCommand::HottubOffCommand(Hottub* hottub) {
		this->hottub_ = hottub;
	}
	void HottubOffCommand::Execute() {
		this->hottub_->Cool();
		this->hottub_->Off();
	}
}