#include "chapter6_macro_command.h"

namespace chapter6_macro {
	TVOnCommand::TVOnCommand(TV* tv) {
		this->tv_ = tv;
	}
	void TVOnCommand::Execute() {
		this->tv_->On();
		this->tv_->SetInputChannel();
	}
	void TVOnCommand::Undo() {
		this->tv_->Off();
	}
}