#include <iostream>
#include "chapter6_simple_remote_control.h"
#include "chapter6_simple_remote_command.h"
#include "chapter6_simple_remote_api.h"

namespace chapter6 {
	void main() {
		std::cout << "========== Chapter6 ==========" << std::endl;
		std::cout << "========== simple remote ==========" << std::endl;
		chapter6_simple_remote::SimpleRemoteControl* remote = new chapter6_simple_remote::SimpleRemoteControl();
		chapter6_simple_remote::LightOnCommand* light_on = new chapter6_simple_remote::LightOnCommand(new chapter6_simple_remote::Light());
		chapter6_simple_remote::GarageDoorOpenCommand* garage_open = new chapter6_simple_remote::GarageDoorOpenCommand(new chapter6_simple_remote::GarageDoor());

		remote->SetCommand(light_on);
		remote->ButtonWasPressed();
		remote->SetCommand(garage_open);
		remote->ButtonWasPressed();

		delete remote;
		delete light_on;
		delete garage_open;
	}
}