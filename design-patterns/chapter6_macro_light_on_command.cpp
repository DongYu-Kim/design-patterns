#include "chapter6_macro_command.h"

namespace chapter6_macro {
	LightOnCommand::LightOnCommand(Light* light) {
		this->light_ = light;
	}
	void LightOnCommand::Execute() {
		this->light_->On();
	}
	void LightOnCommand::Undo() {
		this->light_->Off();
	}
}