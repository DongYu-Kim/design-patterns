#include "chapter6_macro_command.h"

namespace chapter6_macro {
	StereoOnWithCDCommand::StereoOnWithCDCommand(Stereo* stereo) {
		this->stereo_ = stereo;
	}
	void StereoOnWithCDCommand::Execute() {
		this->stereo_->On();
		this->stereo_->SetCD();
		this->stereo_->SetVolume(11);
	}
	void StereoOnWithCDCommand::Undo() {
		this->stereo_->Off();
	}
}