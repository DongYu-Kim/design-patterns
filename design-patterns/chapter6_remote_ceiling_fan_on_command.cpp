#include "chapter6_remote_command.h"

namespace chapter6_remote {
	CeilingFanOnCommand::CeilingFanOnCommand(CeilingFan* ceiling_fan) {
		this->ceiling_fan_ = ceiling_fan;
	}
	void CeilingFanOnCommand::Execute() {
		this->ceiling_fan_->High();
	}
}