#include "chapter6_remote_with_undo_command.h"

namespace chapter6_remote_with_undo {
	DimmerLightOnCommand::DimmerLightOnCommand(Light* light) {
		this->light_ = light;
	}
	void DimmerLightOnCommand::Execute() {
		this->prev_level_ = this->light_->GetLevel();
		this->light_->Dim(75);
	}
	void DimmerLightOnCommand::Undo() {
		this->light_->Dim(this->prev_level_);
	}
}