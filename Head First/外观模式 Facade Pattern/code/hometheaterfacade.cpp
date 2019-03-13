//
// Created by gaojian on 18-10-22.
//

#include "hometheaterfacade.h"
#include "tuner.h"
#include "screen.h"
#include "popcornpopper.h"
#include "amplifier.h"
#include "cdplayer.h"
#include "theaterlights.h"
#include "projector.h"
#include "dvdplayer.h"

HomeTheaterFacade::HomeTheaterFacade(std::shared_ptr<Tuner> tuner, std::shared_ptr<Screen> screen,
									 std::shared_ptr<PopcornPopper> popcornPopper, std::shared_ptr<Amplifier> amplifier,
									 std::shared_ptr<CDPlayer> cdPlayer, std::shared_ptr<TheaterLights> theaterLights,
									 std::shared_ptr<Projector> projector, std::shared_ptr<DVDPlayer> dvdPlayer)
	: m_tuner{tuner}, m_screen{screen}, m_popcornPopper{popcornPopper}, m_amplifier{amplifier},
	  m_cdPlayer{cdPlayer}, m_theaterLights{theaterLights}, m_projector{projector}, m_dvdPlayer{dvdPlayer}
{}

void HomeTheaterFacade::watchMovie()
{
	m_popcornPopper->on();
	m_popcornPopper->pop();
	m_theaterLights->dim();
	m_screen->down();
	m_projector->on();
	m_projector->wideScreenMode();
	m_amplifier->on();
	m_amplifier->setDvd();
	m_amplifier->setSurroundSound();
	m_amplifier->setVolume();
	m_dvdPlayer->on();
	m_dvdPlayer->play();
}

void HomeTheaterFacade::endMovie()
{
	m_popcornPopper->off();
	m_theaterLights->on();
	m_screen->up();
	m_projector->off();
	m_amplifier->off();
	m_dvdPlayer->stop();
	m_dvdPlayer->eject();
	m_dvdPlayer->off();
}

void HomeTheaterFacade::listenToCD()
{}

void HomeTheaterFacade::endCD()
{}

void HomeTheaterFacade::listenToRadio()
{}

void HomeTheaterFacade::endRadio()
{}