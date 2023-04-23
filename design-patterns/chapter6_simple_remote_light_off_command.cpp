#include "chapter6_simple_remote_command.h"

namespace chapter6_simple_remote {
	LightOffCommand::LightOffCommand(Light* light) {
		this->light_ = light;
	}
	LightOffCommand::~LightOffCommand() {
		if (this->light_) delete this->light_;
	}
	void LightOffCommand::Execute() {
		this->light_->Off();
	}
}