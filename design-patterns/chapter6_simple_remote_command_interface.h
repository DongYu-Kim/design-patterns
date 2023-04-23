#pragma once

namespace chapter6_simple_remote {
	class Command {
	public:
		virtual void Execute() = 0;
	};
}