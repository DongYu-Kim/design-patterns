#include "chapter6_macro_command.h"

namespace chapter6_macro {
	HottubOnCommand::HottubOnCommand(Hottub* hottub) {
		this->hottub_ = hottub;
	}
	void HottubOnCommand::Execute() {
		this->hottub_->On();
		this->hottub_->SetTemperature(104);
		this->hottub_->Circulate();
	}
	void HottubOnCommand::Undo() {
		this->hottub_->Off();
	}
}