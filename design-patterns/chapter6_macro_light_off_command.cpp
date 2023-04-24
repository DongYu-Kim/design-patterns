#include "chapter6_macro_command.h"

namespace chapter6_macro {
	LightOffCommand::LightOffCommand(Light* light) {
		this->light_ = light;
	}
	void LightOffCommand::Execute() {
		this->light_->Off();
	}
	void LightOffCommand::Undo() {
		this->light_->On();
	}
}