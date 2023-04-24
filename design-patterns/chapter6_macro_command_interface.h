#pragma once

namespace chapter6_macro {
	class Command {
	public:
		virtual void Execute() = 0;
		virtual void Undo() = 0;
	};
}