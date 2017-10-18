//Honor Pledge: I pledge that I have neither
//given nor received any undue help on this assignment.
//
//strangni

//CS 240 - Assignment 3 - Roster Generator
//Created by: Nicholas Strange

#include "Player.h"
#include <iostream>

#define MAX_PLAYERS 11  //maximum roster size
 
int main(){
	Player* roster = new Player[MAX_PLAYERS]; //array used to store created Players
	int numPlayers = 0;  //total number of players
	int selection = 0;      //stores user's menu selection
	
	std::cout << "\nWelcome to our CSCI 240 Roster Editor!\n\n";
	
	while(numPlayers < MAX_PLAYERS && selection != 3){
		std::cout << "1) Add New Player\n2) View Player(s)\n3) Exit Program\n\nPlease enter your selection: ";  //menu
		std::cin >> selection;

		switch(selection){  //What happens next depends on user's menu selection.
			case 1:{
				std::string fName;	 //holds user input of Player's first name
				std::string lName;	 //holds user input of Player's last name
				int jersey_num;     //holds user input of Player's jersey number

				std::cout << "\nPlease enter a first name: ";
				std::cin >> fName;
			
				std::cout << "Please enter a last name: ";
				std::cin >> lName;
			
				std::cout << "Please enter a number (1-99): ";
				std::cin >> jersey_num;

				roster[numPlayers] = Player(fName, lName, jersey_num);  //constructs a Player with names and number given by user
				numPlayers++;																	 //new Player is stored in the next element of array

				std::cout << "\n**Player Created**\n\n";
				
				break;
			       }
		
			case 2:
				std::cout << "\n**IUPUI Football Roster**\n";
			
				for (int i = 0; i < numPlayers; i++){
					roster[i].printPlayer();  //prints all Players created by user
				}
			
				std::cout << "*************************\n\n";  //output formatting
	
				break;
				
			case 3:
				break;
			
			default:
				std::cout << "\nInvalid choice! Please select Option 1, 2, or 3.\n\n";

		}
	}

	if (numPlayers == MAX_PLAYERS){
		std::cout << "Your roster is now full! It is printed below.\n";
		std::cout << "\n**IUPUI Football Roster**\n";
		
		for (int j = 0; j < numPlayers; j++){
			roster[j].printPlayer();  //prints all 11 Players created by user
		}
		std::cout << "*************************\n\n";  //output formatting
		
	}	
	

 	for (int m=0; m < numPlayers; m++){   //nested loop compares all Players in array
		for (int n = m+1; n < numPlayers; n++){
			//check for duplicate names in roster:
			if (roster[m].getLName() == roster[n].getLName() && roster[m].getFName() == roster[n].getFName()){
				std::cout << "\nFYI: You have duplicated a player: " << roster[m].getFName() << " " << roster[m].getLName() << "\nRerun program to fix this if necessary." << std::endl;		     
			}
			//check for duplicate jersey numbers in roster:
			if (roster[m].getJerseyNum() == roster[n].getJerseyNum()){
				std::cout << "\nFYI: You have duplicated a jersey number: " << roster[m].getJerseyNum() << "\nRerun program to fix this if necessary." << std::endl;
				n = numPlayers - 1;  //allows correct number of duplicates to be shown
			}
		}	
	}
	
	delete [] roster;  //dynamic memory management
	
	std::cout << "\nThank you for using our program - Goodbye!\n\n";
}
