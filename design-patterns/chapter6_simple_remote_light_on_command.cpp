#include "chapter6_simple_remote_command.h"

namespace chapter6_simple_remote {
	LightOnCommand::LightOnCommand(Light* light) {
		this->light_ = light;
	}
	LightOnCommand::~LightOnCommand() {
		if (this->light_) delete this->light_;
	}
	void LightOnCommand::Execute() {
		this->light_->On();
	}
}