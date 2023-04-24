#include "chapter6_remote_command.h"

namespace chapter6_remote {
	GarageDoorUpCommand::GarageDoorUpCommand(GarageDoor* garage_door) {
		this->garage_door_ = garage_door;
	}
	void GarageDoorUpCommand::Execute() {
		this->garage_door_->Up();
	}
}