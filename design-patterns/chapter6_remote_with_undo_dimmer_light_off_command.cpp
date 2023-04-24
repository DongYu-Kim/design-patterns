#include "chapter6_remote_with_undo_command.h"

namespace chapter6_remote_with_undo {
	DimmerLightOffCommand::DimmerLightOffCommand(Light* light) {
		this->light_ = light;
		this->prev_level_ = 100;
	}
	void DimmerLightOffCommand::Execute() {
		this->prev_level_ = this->light_->GetLevel();
		this->light_->Off();
	}
	void DimmerLightOffCommand::Undo() {
		this->light_->Dim(this->prev_level_);
	}
}