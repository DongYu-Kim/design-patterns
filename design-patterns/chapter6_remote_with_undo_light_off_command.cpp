#include "chapter6_remote_with_undo_command.h"

namespace chapter6_remote_with_undo {
	LightOffCommand::LightOffCommand(Light* light) {
		this->light_ = light;
	}
	void LightOffCommand::Execute() {
		this->prev_level_ = this->light_->GetLevel();
		this->light_->Off();
	}
	void LightOffCommand::Undo() {
		this->light_->Dim(this->prev_level_);
	}
}