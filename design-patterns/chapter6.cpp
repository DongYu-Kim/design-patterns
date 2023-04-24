#include <iostream>
#include "chapter6_simple_remote_control.h"
#include "chapter6_simple_remote_command.h"
#include "chapter6_simple_remote_api.h"
#include "chapter6_remote_control.h"
#include "chapter6_remote_command.h"
#include "chapter6_remote_api.h"

namespace chapter6 {
	void main() {
		std::cout << "========== Chapter6 ==========" << std::endl;
		std::cout << "========== simple remote ==========" << std::endl;
		chapter6_simple_remote::SimpleRemoteControl* simple_remote = new chapter6_simple_remote::SimpleRemoteControl();
		chapter6_simple_remote::LightOnCommand* light_on = new chapter6_simple_remote::LightOnCommand(new chapter6_simple_remote::Light());
		chapter6_simple_remote::GarageDoorOpenCommand* garage_open = new chapter6_simple_remote::GarageDoorOpenCommand(new chapter6_simple_remote::GarageDoor());

		simple_remote->SetCommand(light_on);
		simple_remote->ButtonWasPressed();
		simple_remote->SetCommand(garage_open);
		simple_remote->ButtonWasPressed();

		delete simple_remote;
		delete light_on;
		delete garage_open;

		std::cout << "========== remote ==========" << std::endl;
		chapter6_remote::RemoteControl* remote = new chapter6_remote::RemoteControl();
		chapter6_remote::Light* living_room_light = new chapter6_remote::Light("Living Room");
		chapter6_remote::Light* kitchen_light = new chapter6_remote::Light("Kitchen");
		chapter6_remote::CeilingFan* ceiling_fan = new chapter6_remote::CeilingFan("Living Room");
		chapter6_remote::GarageDoor* garage_door = new chapter6_remote::GarageDoor("Garage");
		chapter6_remote::Stereo* stereo = new chapter6_remote::Stereo("Living Room");
	
		remote->SetCommand(0,
			new chapter6_remote::LightOnCommand(living_room_light),
			new chapter6_remote::LightOffCommand(living_room_light));
		remote->SetCommand(1,
			new chapter6_remote::LightOnCommand(kitchen_light),
			new chapter6_remote::LightOffCommand(kitchen_light));
		remote->SetCommand(2,
			new chapter6_remote::CeilingFanOnCommand(ceiling_fan),
			new chapter6_remote::CeilingFanOffCommand(ceiling_fan));
		remote->SetCommand(3,
			new chapter6_remote::StereoOnWithCDCommand(stereo),
			new chapter6_remote::StereoOffCommand(stereo));
		
		std::cout << remote->ToString() << std::endl;

		remote->OnButtonWasPushed(0);
		remote->OffButtonWasPushed(0);
		remote->OnButtonWasPushed(1);
		remote->OffButtonWasPushed(1);
		remote->OnButtonWasPushed(2);
		remote->OffButtonWasPushed(2);
		remote->OnButtonWasPushed(3);
		remote->OffButtonWasPushed(3);

		delete remote;
		delete living_room_light;
		delete kitchen_light;
		delete ceiling_fan;
		delete garage_door;
		delete stereo;
	}
}