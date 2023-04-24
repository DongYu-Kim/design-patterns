#include "chapter6_macro_command.h"

namespace chapter6_macro {
	StereoOffCommand::StereoOffCommand(Stereo* stereo) {
		this->stereo_ = stereo;
	}
	void StereoOffCommand::Execute() {
		this->stereo_->Off();
	}
	void StereoOffCommand::Undo() {
		this->stereo_->On();
	}
}