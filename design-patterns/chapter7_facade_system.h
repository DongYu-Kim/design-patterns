#pragma once
#include <string>

namespace chapter7_facade {
	class Amplifier;

	class Screen {
	private:
		std::string description_;
	public:
		Screen(std::string description);
		void Up();
		void Down();
		std::string ToString();
	};

	class PopcornPopper {
	private:
		std::string description_;
	public:
		PopcornPopper(std::string description);
		void On();
		void Off();
		void Pop();
		std::string ToString();
	};

	class TheaterLights {
	private:
		std::string description_;
	public:
		TheaterLights(std::string description);
		void On();
		void Off();
		void Dim(int level);
		std::string ToString();
	};
	
	class StreamingPlayer {
	private:
		std::string description_;
		int current_chapter_ = 0;
		Amplifier* amplifier_ = nullptr;
		std::string movie_;
	public:
		StreamingPlayer(std::string description, Amplifier* amplifier);
		void On();
		void Off();
		void Play(std::string movie);
		void Play(int chapter);
		void Stop();
		void Pause();
		void SetTwoChannelAudio();
		void SetSurroundAudio();
		std::string ToString();
	};

	class Projector {
	private:
		std::string description_;
		StreamingPlayer* player_ = nullptr;
	public:
		Projector(std::string description, StreamingPlayer* player);
		void On();
		void Off();
		void WideScreenMode();
		void TvMode();
		std::string ToString();
	};

	class Tuner {
	private:
		std::string description_;
		Amplifier* amplifier_ = nullptr;
		double frequency_ = 0.0;
	public:
		Tuner(std::string description, Amplifier* amplifier);
		void On();
		void Off();
		void SetFrequency(double frequency);
		void SetAm();
		void SetFm();
		std::string ToString();
	};

	class Amplifier {
	private:
		std::string description_;
		Tuner* tuner_ = nullptr;
		StreamingPlayer* player_ = nullptr;
	public:
		Amplifier(std::string description);
		void On();
		void Off();
		void SetStereoSound();
		void SetSurroundSound();
		void SetVolume(int level);
		void SetTuner(Tuner* tuner);
		void SetStreamingPlayer(StreamingPlayer* player);
		std::string ToString();
	};

	class CdPlayer {
	private:
		std::string description_;
		int current_track_ = 0;
		Amplifier* amplifier_ = nullptr;
		std::string title_;
	public:
		CdPlayer(std::string description, Amplifier* amplifier);
		void On();
		void Off();
		void Eject();
		void Play(std::string title);
		void Play(int track);
		void Stop();
		void Pause();
		std::string ToString();
	};
}