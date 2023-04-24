#include "chapter6_remote_with_undo_command.h"

namespace chapter6_remote_with_undo {
	LightOnCommand::LightOnCommand(Light* light) {
		this->light_ = light;
	}
	void LightOnCommand::Execute() {
		this->prev_level_ = this->light_->GetLevel();
		this->light_->On();
	}
	void LightOnCommand::Undo() {
		this->light_->Dim(this->prev_level_);
	}
}