//Honor Pledge: I pledge that I have neither
//given nor received any undue help on this assignment.
//
//strangni

//CS 240 - Assignment 3 - Roster Generator
//Created by: Nicholas Strange

#include "Player.h"
#include <iostream>

Player::Player(){  //default constructor
}

Player::Player(std::string fName, std::string lName, int jersey_num){  //overloaded constructor; sets Player's private attributes
	this->fName = fName;  
	this->lName = lName;
	this->jersey_num = jersey_num;
}

Player::~Player(){  //destructor
}

void Player::printPlayer(){  //prints Player's attributes
	std::cout << this->jersey_num << ") " << this->fName << " " << this->lName << std::endl; 
}

std::string Player::getFName(){  //gets Player's first name
	return fName;
}  

std::string Player::getLName(){  //gets Player's last name
	return lName;
}

int Player::getJerseyNum(){  //gets Player's jersey number
	return jersey_num;
}
