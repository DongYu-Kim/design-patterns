#pragma once
#include "chapter6_remote_command_interface.h"
#include "chapter6_remote_api.h"

namespace chapter6_remote {
	class NoCommand : public Command {
		virtual void Execute() override;
	};

	class LightOnCommand : public Command {
	private:
		Light* light_ = nullptr;
	public:
		LightOnCommand(Light* light);
		virtual void Execute() override;
	};

	class LightOffCommand : public Command {
	private:
		Light* light_ = nullptr;
	public:
		LightOffCommand(Light* light);
		virtual void Execute() override;
	};

	class GarageDoorUpCommand : public Command {
	private:
		GarageDoor* garage_door_ = nullptr;
	public:
		GarageDoorUpCommand(GarageDoor* garage_door);
		virtual void Execute() override;
	};

	class GarageDoorDownCommand : public Command {
	private:
		GarageDoor* garage_door_ = nullptr;
	public:
		GarageDoorDownCommand(GarageDoor* garage_door);
		virtual void Execute() override;
	};

	class CeilingFanOnCommand : public Command {
	private:
		CeilingFan* ceiling_fan_ = nullptr;
	public:
		CeilingFanOnCommand(CeilingFan* ceiling_fan);
		virtual void Execute() override;
	};

	class CeilingFanOffCommand : public Command {
	private:
		CeilingFan* ceiling_fan_ = nullptr;
	public:
		CeilingFanOffCommand(CeilingFan* ceiling_fan);
		virtual void Execute() override;
	};

	class StereoOnWithCDCommand : public Command {
	private:
		Stereo* stereo_ = nullptr;
	public:
		StereoOnWithCDCommand(Stereo* stereo);
		virtual void Execute() override;
	};

	class StereoOffCommand : public Command {
	private:
		Stereo* stereo_ = nullptr;
	public:
		StereoOffCommand(Stereo* stereo);
		virtual void Execute() override;
	};

	class HottubOnCommand : public Command {
	private:
		Hottub* hottub_ = nullptr;
	public:
		HottubOnCommand(Hottub* hottub);
		virtual void Execute() override;
	};

	class HottubOffCommand : public Command {
	private:
		Hottub* hottub_ = nullptr;
	public:
		HottubOffCommand(Hottub* hottub);
		virtual void Execute() override;
	};
}