#include "chapter6_macro_command.h"

namespace chapter6_macro {
	CeilingFanHighCommand::CeilingFanHighCommand(CeilingFan* ceiling_fan) {
		this->ceiling_fan_ = ceiling_fan;
	}
	void CeilingFanHighCommand::Execute() {
		this->prev_speed_ = this->ceiling_fan_->GetSpeed();
		this->ceiling_fan_->High();
	}
	void CeilingFanHighCommand::Undo() {
		switch (this->prev_speed_)
		{
		case CeilingFan::kHigh:
			this->ceiling_fan_->High();
			break;
		case CeilingFan::kMedium:
			this->ceiling_fan_->Medium();
			break;
		case CeilingFan::kLow:
			this->ceiling_fan_->Low();
			break;
		default:
			this->ceiling_fan_->Off();
			break;
		}
	}
}