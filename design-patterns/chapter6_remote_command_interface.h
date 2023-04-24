#pragma once

namespace chapter6_remote {
	class Command {
	public:
		virtual void Execute() = 0;
	};
}