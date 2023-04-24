#include "chapter6_macro_command.h"

namespace chapter6_macro {
	MacroCommand::MacroCommand(const std::vector<Command*>& commands) {
		this->commands_ = commands;
	}
	void MacroCommand::Execute() {
		for (Command* command: this->commands_) {
			command->Execute();
		}
	}
	void MacroCommand::Undo() {
		for (int i = this->commands_.size() - 1; i >= 0; i--) {
			this->commands_[i]->Undo();
		}
	}
}