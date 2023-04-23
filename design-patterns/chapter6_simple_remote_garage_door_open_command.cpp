#include "chapter6_simple_remote_command.h"

namespace chapter6_simple_remote {
	GarageDoorOpenCommand::GarageDoorOpenCommand(GarageDoor* garage_door) {
		this->garage_door_ = garage_door;
	}
	GarageDoorOpenCommand::~GarageDoorOpenCommand() {
		if (this->garage_door_) delete this->garage_door_;
	}
	void GarageDoorOpenCommand::Execute() {
		this->garage_door_->Up();
	}
}