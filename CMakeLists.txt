project(BuildMSI)

cmake_minimum_required(VERSION 3.0)

add_executable(buildmsi
	buildmsi.cpp)

target_compile_definitions(buildmsi
	PRIVATE UNICODE _UNICODE)
