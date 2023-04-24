#include <typeinfo>
#include "chapter6_remote_control.h"
#include "chapter6_remote_command.h"

namespace chapter6_remote {
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
	}
	void RemoteControl::OffButtonWasPushed(int slot) {
		this->off_commands_[slot]->Execute();
	}
	std::string RemoteControl::ToString() {
		std::string display = "------ Remote Control ------\n";
		for (int i = 0; i < this->on_commands_.size(); i++) {
			display += "[slot " + std::to_string(i) + "] "
				+ typeid(*this->on_commands_[i]).name() + "    " 
				+ typeid(*this->off_commands_[i]).name() + "\n";
		}
		return display;
	}
}