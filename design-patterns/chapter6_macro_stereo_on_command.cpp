#include "chapter6_macro_command.h"

namespace chapter6_macro {
	StereoOnCommand::StereoOnCommand(Stereo* stereo) {
		this->stereo_ = stereo;
	}
	void StereoOnCommand::Execute() {
		this->stereo_->On();
	}
	void StereoOnCommand::Undo() {
		this->stereo_->Off();
	}
}