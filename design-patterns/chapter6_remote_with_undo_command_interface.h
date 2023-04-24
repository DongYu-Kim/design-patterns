#pragma once

namespace chapter6_remote_with_undo {
	class Command {
	public:
		virtual void Execute() = 0;
		virtual void Undo() = 0;
	};
}