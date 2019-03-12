cmake_minimum_required(VERSION 3.13)
project(homework4_Parking_Ticket)

set(CMAKE_CXX_STANDARD 14)

add_executable(homework4_Parking_Ticket main.cpp ParkedCar.cpp ParkedCar.h ParkingMeter.cpp ParkingMeter.h ParkingTicket.cpp ParkingTicket.h PoliceOfficer.cpp PoliceOfficer.h)