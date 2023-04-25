#include <iostream>
#include "chapter7_facade.h"

namespace chapter7_facade {
	HomeTheaterFacade::HomeTheaterFacade(Amplifier* amp, Tuner* tuner, StreamingPlayer* player, Projector* projector, Screen* screen, TheaterLights* lights, PopcornPopper* popper) {
		this->amp_ = amp;
		this->tuner_ = tuner;
		this->player_ = player;
		this->projector_ = projector;
		this->screen_ = screen;
		this->lights_ = lights;
		this->popper_ = popper;
	}
	void HomeTheaterFacade::WatchMovie(std::string movie) {
		std::cout << "영화볼 준비 중..." << std::endl;
		this->popper_->On();
		this->popper_->Pop();
		this->lights_->Dim(10);
		this->screen_->Down();
		this->projector_->On();
		this->projector_->WideScreenMode();
		this->amp_->On();
		this->amp_->SetStreamingPlayer(this->player_);
		this->amp_->SetSurroundSound();
		this->amp_->SetVolume(5);
		this->player_->On();
		this->player_->Play(movie);
	}
	void HomeTheaterFacade::EndMovie() {
		std::cout << "영화관 닫는 중..." << std::endl;
		this->popper_->Off();
		this->lights_->On();
		this->screen_->Up();
		this->projector_->Off();
		this->amp_->Off();
		this->player_->Stop();
		this->player_->Off();
	}
	void HomeTheaterFacade::ListenToRadio(double frequency) {
		std::cout << "공중파 트는 중..." << std::endl;
		this->tuner_->On();
		this->tuner_->SetFrequency(frequency);
		this->amp_->On();
		this->amp_->SetVolume(5);
		this->amp_->SetTuner(this->tuner_);
	}
	void HomeTheaterFacade::EndRadio() {
		std::cout << "튜너 종료 중..." << std::endl;
		this->tuner_->Off();
		this->amp_->Off();
	}
}