#include <iostream>
#include <memory>
#include "hometheaterfacade.h"
#include "tuner.h"
#include "screen.h"
#include "popcornpopper.h"
#include "amplifier.h"
#include "cdplayer.h"
#include "theaterlights.h"
#include "projector.h"
#include "dvdplayer.h"

using std::shared_ptr;			using std::make_shared;

int main()
{
	shared_ptr<Tuner> tuner = make_shared<Tuner>(Tuner());
	shared_ptr<Screen> screen = make_shared<Screen>(Screen());
	shared_ptr<PopcornPopper> popcornPopper = make_shared<PopcornPopper>(PopcornPopper());
	shared_ptr<Amplifier> amplifier = make_shared<Amplifier>(Amplifier());
	shared_ptr<CDPlayer> cd = make_shared<CDPlayer>(CDPlayer());
	shared_ptr<TheaterLights> lights = make_shared<TheaterLights>(TheaterLights());
	shared_ptr<Projector> projector = make_shared<Projector>(Projector());
	shared_ptr<DVDPlayer> dvd = make_shared<DVDPlayer>(DVDPlayer());

	shared_ptr<HomeTheaterFacade> theaterFacade = make_shared<HomeTheaterFacade>(HomeTheaterFacade(
			tuner, screen, popcornPopper, amplifier, cd, lights, projector, dvd));

	theaterFacade->watchMovie();
	theaterFacade->endMovie();

	return 0;
}