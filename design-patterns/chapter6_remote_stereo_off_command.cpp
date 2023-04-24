#include "chapter6_remote_command.h"

namespace chapter6_remote {
	StereoOffCommand::StereoOffCommand(Stereo* stereo) {
		this->stereo_ = stereo;
	}
	void StereoOffCommand::Execute() {
		this->stereo_->Off();
	}
}