#include "chapter6_macro_command.h"

namespace chapter6_macro {
	TVOffCommand::TVOffCommand(TV* tv) {
		this->tv_ = tv;
	}
	void TVOffCommand::Execute() {
		this->tv_->Off();
	}
	void TVOffCommand::Undo() {
		this->tv_->On();
	}
}