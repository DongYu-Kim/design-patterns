#include <vector>
#include "chapter6_macro_command_interface.h"
#include "chapter6_macro_api.h"

namespace chapter6_macro {
	class NoCommand : public Command {
	public:
		virtual void Execute() override;
		virtual void Undo() override;
	};

	class MacroCommand : public Command {
	private:
		std::vector<Command*> commands_;
	public:
		MacroCommand(const std::vector<Command*>& commands);
		virtual void Execute() override;
		virtual void Undo() override;
	};

	class LightOnCommand : public Command {
	private:
		Light* light_ = nullptr;
	public:
		LightOnCommand(Light* light);
		virtual void Execute() override;
		virtual void Undo() override;
	};

	class LightOffCommand : public Command {
	private:
		Light* light_ = nullptr;
	public:
		LightOffCommand(Light* light);
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

	class HottubOnCommand : public Command {
	private:
		Hottub* hottub_ = nullptr;
	public:
		HottubOnCommand(Hottub* hottub);
		virtual void Execute() override;
		virtual void Undo() override;
	};

	class HottubOffCommand : public Command {
	private:
		Hottub* hottub_ = nullptr;
	public:
		HottubOffCommand(Hottub* hottub);
		virtual void Execute() override;
		virtual void Undo() override;
	};

	class StereoOnCommand : public Command {
	private:
		Stereo* stereo_ = nullptr;
	public:
		StereoOnCommand(Stereo* stereo);
		virtual void Execute() override;
		virtual void Undo() override;
	};

	class StereoOnWithCDCommand : public Command {
	private:
		Stereo* stereo_ = nullptr;
	public:
		StereoOnWithCDCommand(Stereo* stereo);
		virtual void Execute() override;
		virtual void Undo() override;
	};

	class StereoOffCommand : public Command {
	private:
		Stereo* stereo_ = nullptr;
	public:
		StereoOffCommand(Stereo* stereo);
		virtual void Execute() override;
		virtual void Undo() override;
	};

	class TVOnCommand : public Command {
	private:
		TV* tv_ = nullptr;
	public:
		TVOnCommand(TV* tv);
		virtual void Execute() override;
		virtual void Undo() override;
	};

	class TVOffCommand : public Command {
	private:
		TV* tv_ = nullptr;
	public:
		TVOffCommand(TV* tv);
		virtual void Execute() override;
		virtual void Undo() override;
	};
}