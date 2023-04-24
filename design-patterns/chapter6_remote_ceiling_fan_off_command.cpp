#include "chapter6_remote_command.h"

namespace chapter6_remote {
	CeilingFanOffCommand::CeilingFanOffCommand(CeilingFan* ceiling_fan) {
		this->ceiling_fan_ = ceiling_fan;
	}
	void CeilingFanOffCommand::Execute() {
		this->ceiling_fan_->Off();
	}
}