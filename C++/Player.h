//Honor Pledge: I pledge that I have neither
//given nor received any undue help on this assignment.
//
//strangni

//CS 240 - Assignment 3 - Roster Generator
//Created by: Nicholas Strange

//header guard
#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>

class Player {
	private:
		std::string fName;  //Player's first name
		std::string lName;  //Player's last name
		int jersey_num;      //Player's jersey number

	public:
		Player();  //default constructor
		~Player();  //destructor
		Player(std::string, std::string, int);  //overloaded constructor; sets Player's private attributes
		void printPlayer();          //prints Player's attributes
		std::string getFName();  //gets Player's first name
		std::string getLName();  //gets Player's last name
		int getJerseyNum();       //gets player's jersey number
};

#endif
