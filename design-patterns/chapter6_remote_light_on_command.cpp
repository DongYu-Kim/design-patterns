#include "chapter6_remote_command.h"

namespace chapter6_remote {
	LightOnCommand::LightOnCommand(Light* light) {
		this->light_ = light;
	}
	void LightOnCommand::Execute() {
		this->light_->On();
	}
}