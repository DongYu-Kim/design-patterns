#include "chapter6_remote_command.h"

namespace chapter6_remote {
	LightOffCommand::LightOffCommand(Light* light) {
		this->light_ = light;
	}
	void LightOffCommand::Execute() {
		this->light_->Off();
	}
}