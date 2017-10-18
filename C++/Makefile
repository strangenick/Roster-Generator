#Honor Pledge: I pledge that I have neither
#given nor received any undue help on this assignment.
#
#strangni
#
#CS 240 - Assignment 3 - Roster Generator
#Created by: Nicholas Strange

Roster: Driver.o Player.o
	g++ Driver.o Player.o -o Roster
	
Driver.o: Driver.cpp
	g++ -c Driver.cpp -o Driver.o
	
Player.o: Player.cpp Player.h
	g++ -c Player.cpp -o Player.o
	
clean:
	rm -f Driver.o Player.o Roster
	
run: Roster
	./Roster
