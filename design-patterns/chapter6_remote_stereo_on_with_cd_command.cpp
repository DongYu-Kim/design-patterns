#include "chapter6_remote_command.h"

namespace chapter6_remote {
	StereoOnWithCDCommand::StereoOnWithCDCommand(Stereo* stereo) {
		this->stereo_ = stereo;
	}
	void StereoOnWithCDCommand::Execute() {
		this->stereo_->On();
		this->stereo_->SetCD();
		this->stereo_->SetVolume(11);
	}
}