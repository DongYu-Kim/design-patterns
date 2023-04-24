#include "chapter6_remote_command.h"

namespace chapter6_remote {
	GarageDoorDownCommand::GarageDoorDownCommand(GarageDoor* garage_door) {
		this->garage_door_ = garage_door;
	}
	void GarageDoorDownCommand::Execute() {
		this->garage_door_->Down();
	}
}