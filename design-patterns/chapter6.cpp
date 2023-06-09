#include <vector>
#include <iostream>
#include "chapter6_simple_remote_control.h"
#include "chapter6_simple_remote_command.h"
#include "chapter6_simple_remote_api.h"
#include "chapter6_remote_control.h"
#include "chapter6_remote_command.h"
#include "chapter6_remote_api.h"
#include "chapter6_remote_with_undo_control.h"
#include "chapter6_remote_with_undo_command.h"
#include "chapter6_remote_with_undo_api.h"
#include "chapter6_macro_control.h"
#include "chapter6_macro_command.h"
#include "chapter6_macro_api.h"

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
		chapter6_remote::CeilingFan* living_room_ceiling_fan = new chapter6_remote::CeilingFan("Living Room");
		chapter6_remote::GarageDoor* garage_door = new chapter6_remote::GarageDoor("Garage");
		chapter6_remote::Stereo* living_room_stereo = new chapter6_remote::Stereo("Living Room");
	
		remote->SetCommand(0,
			new chapter6_remote::LightOnCommand(living_room_light),
			new chapter6_remote::LightOffCommand(living_room_light));
		remote->SetCommand(1,
			new chapter6_remote::LightOnCommand(kitchen_light),
			new chapter6_remote::LightOffCommand(kitchen_light));
		remote->SetCommand(2,
			new chapter6_remote::CeilingFanOnCommand(living_room_ceiling_fan),
			new chapter6_remote::CeilingFanOffCommand(living_room_ceiling_fan));
		remote->SetCommand(3,
			new chapter6_remote::StereoOnWithCDCommand(living_room_stereo),
			new chapter6_remote::StereoOffCommand(living_room_stereo));
		
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
		delete living_room_ceiling_fan;
		delete garage_door;
		delete living_room_stereo;

		std::cout << "========== remote with undo ==========" << std::endl;
		chapter6_remote_with_undo::RemoteControl* remote_with_undo = new chapter6_remote_with_undo::RemoteControl();
		chapter6_remote_with_undo::Light* living_room_light2 = new chapter6_remote_with_undo::Light("Living Room");
		chapter6_remote_with_undo::CeilingFan* living_room_ceiling_fan2 = new chapter6_remote_with_undo::CeilingFan("Living Room");

		std::cout << remote_with_undo->ToString() << std::endl;
		remote_with_undo->SetCommand(0,
			new chapter6_remote_with_undo::LightOnCommand(living_room_light2),
			new chapter6_remote_with_undo::LightOffCommand(living_room_light2));
		remote_with_undo->OnButtonWasPushed(0);
		remote_with_undo->OffButtonWasPushed(0);
		std::cout << remote_with_undo->ToString() << std::endl;
		remote_with_undo->UndoButtonWasPushed();
		remote_with_undo->OffButtonWasPushed(0);
		remote_with_undo->OnButtonWasPushed(0);
		std::cout << remote_with_undo->ToString() << std::endl;
		remote_with_undo->UndoButtonWasPushed();

		remote_with_undo->SetCommand(1,
			new chapter6_remote_with_undo::CeilingFanMediumCommand(living_room_ceiling_fan2),
			new chapter6_remote_with_undo::CeilingFanOffCommand(living_room_ceiling_fan2));
		remote_with_undo->SetCommand(2,
			new chapter6_remote_with_undo::CeilingFanHighCommand(living_room_ceiling_fan2),
			new chapter6_remote_with_undo::CeilingFanOffCommand(living_room_ceiling_fan2));
		remote_with_undo->OnButtonWasPushed(1);
		remote_with_undo->OffButtonWasPushed(1);
		std::cout << remote_with_undo->ToString();
		remote_with_undo->UndoButtonWasPushed();
		remote_with_undo->OnButtonWasPushed(2);
		std::cout << remote_with_undo->ToString();
		remote_with_undo->UndoButtonWasPushed();

		delete remote_with_undo;
		delete living_room_light2;
		delete living_room_ceiling_fan2;
	
		std::cout << "========== macro ==========" << std::endl;
		chapter6_macro::RemoteControl* macro = new chapter6_macro::RemoteControl();
		chapter6_macro::Light* living_room_light3 = new chapter6_macro::Light("Living Room");
		chapter6_macro::TV* living_room_tv3 = new chapter6_macro::TV("Living Room");
		chapter6_macro::Stereo* living_room_stereo3 = new chapter6_macro::Stereo("Living Room");
		chapter6_macro::Hottub* hottub3 = new chapter6_macro::Hottub();
		std::vector<chapter6_macro::Command*> party_on = {
			new chapter6_macro::LightOnCommand(living_room_light3),
			new chapter6_macro::StereoOnCommand(living_room_stereo3),
			new chapter6_macro::TVOnCommand(living_room_tv3),
			new chapter6_macro::HottubOnCommand(hottub3)
		};
		std::vector<chapter6_macro::Command*> party_off = {
			new chapter6_macro::LightOffCommand(living_room_light3),
			new chapter6_macro::StereoOffCommand(living_room_stereo3),
			new chapter6_macro::TVOffCommand(living_room_tv3),
			new chapter6_macro::HottubOffCommand(hottub3)
		};

		macro->SetCommand(0,
			new chapter6_macro::MacroCommand(party_on),
			new chapter6_macro::MacroCommand(party_off));
		std::cout << macro->ToString() << std::endl;
		std::cout << "--- 매크로 ON ---" << std::endl;
		macro->OnButtonWasPushed(0);
		std::cout << "--- 매크로 OFF ---" << std::endl;
		macro->OffButtonWasPushed(0);

		delete macro;
		delete living_room_light3;
		delete living_room_tv3;
		delete living_room_stereo3;
		delete hottub3;
		for (auto command : party_on) delete command;
		for (auto command : party_off) delete command;
	}
}