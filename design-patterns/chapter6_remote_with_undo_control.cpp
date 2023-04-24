#include <typeinfo>
#include "chapter6_remote_with_undo_control.h"
#include "chapter6_remote_with_undo_command.h"

namespace chapter6_remote_with_undo {
	RemoteControl::RemoteControl() {
		for (int i = 0; i < 7; i++) {
			this->on_commands_.push_back(new NoCommand());
			this->off_commands_.push_back(new NoCommand());
		}
	}
	RemoteControl::~RemoteControl() {
		for (int i = 0; i < 7; i++) {
			delete this->on_commands_[i];
			delete this->off_commands_[i];
		}
	}
	void RemoteControl::SetCommand(int slot, Command* on_command, Command* off_command) {
		delete this->on_commands_[slot];
		this->on_commands_[slot] = on_command;
		delete this->off_commands_[slot];
		this->off_commands_[slot] = off_command;
	}
	void RemoteControl::OnButtonWasPushed(int slot) {
		this->on_commands_[slot]->Execute();
		this->undo_command_ = this->on_commands_[slot];
	}
	void RemoteControl::OffButtonWasPushed(int slot) {
		this->off_commands_[slot]->Execute();
		this->undo_command_ = this->off_commands_[slot];
	}
	void RemoteControl::UndoButtonWasPushed() {
		this->undo_command_->Undo();
	}
	std::string RemoteControl::ToString() {
		std::string display = "------ Remote Control ------\n";
		for (int i = 0; i < this->on_commands_.size(); i++) {
			display += "[slot " + std::to_string(i) + "] "
				+ typeid(*this->on_commands_[i]).name() + "    "
				+ typeid(*this->off_commands_[i]).name() + "\n";
		}
		if (this->undo_command_) display += "[undo] " + (std::string)typeid(*this->undo_command_).name() + "\n";
		else {
			NoCommand no_command;
			display += "[undo] " + (std::string)typeid(no_command).name() + "\n";
		}
		return display;
	}
}