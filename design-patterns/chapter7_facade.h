#pragma once
#include "chapter7_facade_system.h"

namespace chapter7_facade {
	class HomeTheaterFacade {
	private:
		Amplifier* amp_ = nullptr;
		Tuner* tuner_ = nullptr;
		StreamingPlayer* player_ = nullptr;
		CdPlayer* cd_ = nullptr;
		Projector* projector_ = nullptr;
		TheaterLights* lights_ = nullptr;
		Screen* screen_ = nullptr;
		PopcornPopper* popper_ = nullptr;
	public:
		HomeTheaterFacade(Amplifier* amp, Tuner* tuner, StreamingPlayer* player, Projector* projector, Screen* screen, TheaterLights* lights, PopcornPopper* popper);
		void WatchMovie(std::string movie);
		void EndMovie();
		void ListenToRadio(double frequency);
		void EndRadio();
	};
}