#include <iostream>
#include "chapter7_object_adapter.h"
#include "chapter7_object_adapter_duck.h"
#include "chapter7_object_adapter_turkey.h"
#include "chapter7_class_adapter.h"
#include "chapter7_class_adapter_duck.h"
#include "chapter7_class_adapter_turkey.h"
#include "chapter7_facade.h"

namespace chapter7 {
	void main() {
		std::cout << "========== Chapter7 ==========" << std::endl;
		std::cout << "========== object adapter ==========" << std::endl;
		chapter7_object_adapter::Duck* duck = new chapter7_object_adapter::MallardDuck();
		chapter7_object_adapter::Turkey* turkey = new chapter7_object_adapter::WildTurkey();
		duck->Quack();
		duck->Fly();
		turkey->Gobble();
		turkey->Fly();
		std::cout << "--- duck adapter ---" << std::endl;
		chapter7_object_adapter::Duck* turkey_duck = new chapter7_object_adapter::TurkeyAdapter(turkey);
		turkey_duck->Quack();
		turkey_duck->Fly();
		std::cout << "--- turkey adapter ---" << std::endl;
		chapter7_object_adapter::Turkey* duck_turkey = new chapter7_object_adapter::DuckAdapter(duck);
		duck_turkey->Gobble();
		duck_turkey->Fly();
		delete duck;
		delete turkey;
		delete turkey_duck;
		delete duck_turkey;

		std::cout << "========== class adapter ==========" << std::endl;
		std::cout << "--- duck adapter ---" << std::endl;
		chapter7_class_adapter::Duck* turkey_duck2 = new chapter7_class_adapter::WildTurkeyAdapter();
		turkey_duck2->Quack();
		turkey_duck2->Fly();
		std::cout << "--- turkey adapter ---" << std::endl;
		chapter7_class_adapter::Turkey* duck_turkey2 = new chapter7_class_adapter::MallardDuckAdapter();
		duck_turkey2->Gobble();
		duck_turkey2->Fly();
		delete turkey_duck2;
		delete duck_turkey2;

		std::cout << "========== facade ==========" << std::endl;
		chapter7_facade::Amplifier* amp = new chapter7_facade::Amplifier("엠프");
		chapter7_facade::Tuner* tuner = new chapter7_facade::Tuner("AM/FM 튜너", amp);
		chapter7_facade::StreamingPlayer* player = new chapter7_facade::StreamingPlayer("스트리밍 재생기", amp);
		chapter7_facade::CdPlayer* cd = new chapter7_facade::CdPlayer("CD 플레이어", amp);
		chapter7_facade::Projector* projector = new chapter7_facade::Projector("프로젝터", player);
		chapter7_facade::TheaterLights* lights = new chapter7_facade::TheaterLights("영화관 천장 전구들");
		chapter7_facade::Screen* screen = new chapter7_facade::Screen("영화관 스크린");
		chapter7_facade::PopcornPopper* popper = new chapter7_facade::PopcornPopper("팝콘 기계");
		
		chapter7_facade::HomeTheaterFacade* home_theater = new chapter7_facade::HomeTheaterFacade(amp, tuner, player, projector, screen, lights, popper);
		home_theater->WatchMovie("Raiders of the Lost Ark");
		home_theater->EndMovie();

		delete amp;
		delete tuner;
		delete player;
		delete cd;
		delete projector;
		delete lights;
		delete screen;
		delete popper;
		delete home_theater;
	}
}