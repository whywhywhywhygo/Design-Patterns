//
// Created by gaojian on 18-10-22.
//

#ifndef CODE_HOMETHEATERFACADE_H
#define CODE_HOMETHEATERFACADE_H

#include <memory>

class Tuner;
class Screen;
class PopcornPopper;
class Amplifier;
class CDPlayer;
class TheaterLights;
class Projector;
class DVDPlayer;

class HomeTheaterFacade {
public:
	HomeTheaterFacade(std::shared_ptr<Tuner> tuner,
			std::shared_ptr<Screen> screen,
			std::shared_ptr<PopcornPopper> popcornPopper,
			std::shared_ptr<Amplifier> amplifier,
			std::shared_ptr<CDPlayer> cdPlayer,
			std::shared_ptr<TheaterLights> theaterLights,
			std::shared_ptr<Projector> projector,
			std::shared_ptr<DVDPlayer> dvdPlayer
	);

	void watchMovie();
	void endMovie();
	void listenToCD();
	void endCD();
	void listenToRadio();
	void endRadio();

private:
	std::shared_ptr<Tuner> m_tuner;
	std::shared_ptr<Screen> m_screen;
	std::shared_ptr<PopcornPopper> m_popcornPopper;
	std::shared_ptr<Amplifier> m_amplifier;
	std::shared_ptr<CDPlayer> m_cdPlayer;
	std::shared_ptr<TheaterLights> m_theaterLights;
	std::shared_ptr<Projector> m_projector;
	std::shared_ptr<DVDPlayer> m_dvdPlayer;
};

#endif //CODE_HOMETHEATERFACADE_H
