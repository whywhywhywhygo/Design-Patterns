cmake_minimum_required(VERSION 3.12)
project(code)

set(CMAKE_CXX_STANDARD 17)

add_executable(code main.cpp command.h lightoncommand.cpp lightoncommand.h light.cpp light.h remotecontrol.cpp remotecontrol.h garagedoor.cpp garagedoor.h garagedooropencommand.cpp garagedooropencommand.h stereo.cpp stereo.h lightoffcommand.cpp lightoffcommand.h garagedoorclosecommand.cpp garagedoorclosecommand.h stereoonwithcdcommand.cpp stereoonwithcdcommand.h stereooffcommand.cpp stereooffcommand.h nocommand.cpp nocommand.h ceilingfan.cpp ceilingfan.h ceilingfanhighcommand.cpp ceilingfanhighcommand.h ceilingfanmediumcommand.cpp ceilingfanmediumcommand.h ceilingfanoffcommand.cpp ceilingfanoffcommand.h macrocommand.cpp macrocommand.h)