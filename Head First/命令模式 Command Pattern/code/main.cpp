#include <iostream>
#include <memory>
#include <vector>
#include "light.h"
#include "lightoncommand.h"
#include "lightoffcommand.h"
#include "garagedoor.h"
#include "garagedooropencommand.h"
#include "garagedoorclosecommand.h"
#include "stereo.h"
#include "stereooffcommand.h"
#include "stereoonwithcdcommand.h"
#include "ceilingfan.h"
#include "ceilingfanhighcommand.h"
#include "ceilingfanmediumcommand.h"
#include "ceilingfanoffcommand.h"
#include "macrocommand.h"
#include "remotecontrol.h"

using std::shared_ptr;			using std::make_shared;
using std::vector;

int main()
{
	//light
	shared_ptr<Light> light = make_shared<Light>(Light());
	shared_ptr<Command> lightOnCommand = make_shared<LightOnCommand>(LightOnCommand(light));
	shared_ptr<Command> lightOffCommand = make_shared<LightOffCommand>(LightOffCommand(light));
	//door
	shared_ptr<GarageDoor> door = make_shared<GarageDoor>(GarageDoor());
	shared_ptr<Command> doorOpenCommand = make_shared<GarageDoorOpenCommand>(GarageDoorOpenCommand(door));
	shared_ptr<Command> doorCloseCommand = make_shared<GarageDoorCloseCommand>(GarageDoorCloseCommand(door));
	//stereo
	shared_ptr<Stereo> stereo = make_shared<Stereo>(Stereo());
	shared_ptr<Command> stereoOnWithCdCommand = make_shared<StereoOnWithCDCommand>(StereoOnWithCDCommand(stereo));
	shared_ptr<Command> stereoOffCommand = make_shared<StereoOffCommand>(StereoOffCommand(stereo));
	//ceiling fan
	shared_ptr<CeilingFan> ceilingFan = make_shared<CeilingFan>(CeilingFan());
	shared_ptr<Command> ceilingFanHigh = make_shared<CeilingFanHighCommand>(CeilingFanHighCommand(ceilingFan));
	shared_ptr<Command> ceilingFanMedium = make_shared<CeilingFanMediumCommand>(CeilingFanMediumCommand(ceilingFan));
	shared_ptr<Command> ceilingFanOff = make_shared<CeilingFanOffCommand>(CeilingFanOffCommand(ceilingFan));
	//macro
	vector<shared_ptr<Command>> onCommands;
	onCommands.push_back(lightOnCommand);
	onCommands.push_back(doorCloseCommand);
	onCommands.push_back(stereoOffCommand);
	onCommands.push_back(ceilingFanMedium);
	vector<shared_ptr<Command>> offCommands;
	offCommands.push_back(lightOffCommand);
	offCommands.push_back(doorOpenCommand);
	offCommands.push_back(stereoOnWithCdCommand);
	offCommands.push_back(ceilingFanOff);
	shared_ptr<Command> macroOnCommand = make_shared<MacroCommand>(MacroCommand(onCommands));
	shared_ptr<Command> macroOffCommand = make_shared<MacroCommand>(MacroCommand(offCommands));
	//remote control
	shared_ptr<RemoteControl> control = make_shared<RemoteControl>(RemoteControl());

	control->setCommand(0, lightOnCommand, lightOffCommand);
	control->setCommand(1, doorOpenCommand, doorCloseCommand);
	control->setCommand(2, stereoOnWithCdCommand, stereoOffCommand);
	control->setCommand(3, ceilingFanHigh, ceilingFanOff);
	control->setCommand(4, ceilingFanMedium, ceilingFanOff);
	control->setCommand(5, macroOnCommand, macroOffCommand);

	control->onButtonWasPushed(0);
	control->onButtonWasPushed(1);
	control->onButtonWasPushed(2);
	control->offButtonWasPushed(0);
	control->offButtonWasPushed(1);
	control->offButtonWasPushed(2);
	/*control->onButtonWasPushed(4);
	control->offButtonWasPushed(9);*/
	control->undoButtonWasPushed();
	control->onButtonWasPushed(3);
	control->onButtonWasPushed(4);
	control->offButtonWasPushed(4);
	control->undoButtonWasPushed();
	control->onButtonWasPushed(5);
	control->offButtonWasPushed(5);
	control->undoButtonWasPushed();

	return 0;
}