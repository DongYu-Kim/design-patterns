#pragma once
#include "chapter6_remote_with_undo_command_interface.h"
#include "chapter6_remote_with_undo_api.h"

namespace chapter6_remote_with_undo {
	class NoCommand : public Command {
		virtual void Execute() override;
		virtual void Undo() override;
	};

	class LightOnCommand : public Command {
	private:
		Light* light_ = nullptr;
		int prev_level_ = 0;
	public:
		LightOnCommand(Light* light);
		virtual void Execute() override;
		virtual void Undo() override;
	};

	class LightOffCommand : public Command {
	private:
		Light* light_ = nullptr;
		int prev_level_ = 0;
	public:
		LightOffCommand(Light* light);
		virtual void Execute() override;
		virtual void Undo() override;
	};

	class DimmerLightOnCommand : public Command {
	private:
		Light* light_ = nullptr;
		int prev_level_ = 0;
	public:
		DimmerLightOnCommand(Light* light);
		virtual void Execute() override;
		virtual void Undo() override;
	};

	class DimmerLightOffCommand : public Command {
	private:
		Light* light_ = nullptr;
		int prev_level_ = 0;
	public:
		DimmerLightOffCommand(Light* light);
		virtual void Execute() override;
		virtual void Undo() override;
	};

	class CeilingFanHighCommand : public Command {
	private:
		CeilingFan* ceiling_fan_ = nullptr;
		int prev_speed_ = 0;
	public:
		CeilingFanHighCommand(CeilingFan* ceiling_fan);
		virtual void Execute() override;
		virtual void Undo() override;
	};

	class CeilingFanMediumCommand : public Command {
	private:
		CeilingFan* ceiling_fan_ = nullptr;
		int prev_speed_ = 0;
	public:
		CeilingFanMediumCommand(CeilingFan* ceiling_fan);
		virtual void Execute() override;
		virtual void Undo() override;
	};

	class CeilingFanLowCommand : public Command {
	private:
		CeilingFan* ceiling_fan_ = nullptr;
		int prev_speed_ = 0;
	public:
		CeilingFanLowCommand(CeilingFan* ceiling_fan);
		virtual void Execute() override;
		virtual void Undo() override;
	};

	class CeilingFanOffCommand : public Command {
	private:
		CeilingFan* ceiling_fan_ = nullptr;
		int prev_speed_ = 0;
	public:
		CeilingFanOffCommand(CeilingFan* ceiling_fan);
		virtual void Execute() override;
		virtual void Undo() override;
	};
}