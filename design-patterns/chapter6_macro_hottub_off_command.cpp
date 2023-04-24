#include "chapter6_macro_command.h"

namespace chapter6_macro {
	HottubOffCommand::HottubOffCommand(Hottub* hottub) {
		this->hottub_ = hottub;
	}
	void HottubOffCommand::Execute() {
		this->hottub_->SetTemperature(98);
		this->hottub_->Off();
	}
	void HottubOffCommand::Undo() {
		this->hottub_->On();
	}
}