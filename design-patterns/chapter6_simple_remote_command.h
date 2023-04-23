#pragma once
#include "chapter6_simple_remote_command_interface.h"
#include "chapter6_simple_remote_api.h"

namespace chapter6_simple_remote {
	class LightOnCommand : public Command {
	private:
		Light* light_ = nullptr;
	public:
		LightOnCommand(Light* light);
		~LightOnCommand();
		virtual void Execute() override;
	};
	
	class LightOffCommand : public Command {
	private:
		Light* light_ = nullptr;
	public:
		LightOffCommand(Light* light);
		~LightOffCommand();
		virtual void Execute() override;
	};

	class GarageDoorOpenCommand : public Command {
	private:
		GarageDoor* garage_door_ = nullptr;
	public:
		GarageDoorOpenCommand(GarageDoor* garage_door);
		~GarageDoorOpenCommand();
		virtual void Execute() override;
	};
}