//Honor Pledge: I pledge that I have neither
//given nor received any undue help on this assignment.
//
//strangni

//CS 240 - Assignment 3 - Roster Generator
//Created by: Nicholas Strange

import java.io.*;
import java.util.Scanner;

public class Driver{
	public static void main(String [] args){
		Player[] roster = new Player[11];  //array used to store created Players
		int numPlayers = 0;  //total number of players
		int selection = 0;      //stores user's menu selection
		Scanner input = new Scanner(System.in);
		
		System.out.println("\nWelcome to our CSCI 240 Roster Editor!\n");
	
		while (numPlayers < 11 && selection != 3){  //11 is max roster size
			System.out.print("1) Add New Player\n2) View Player(s)\n3) Exit Program\n\nPlease enter your selection: ");  //menu
			selection = input.nextInt();
			
			switch (selection){ //What happens next depends on user's menu selection.
				case 1:
					String fName;   //holds user input of Player's first name
					String lName;   //holds user input of Player's last name
					int jersey_num; //holds user input of Player's jersey number

					System.out.print("\nPlease enter a first name: ");
					fName = input.next();
				
					System.out.print("Please enter a last name: ");
					lName = input.next();
				
					System.out.print("Please enter a number (1-99): ");
					jersey_num = input.nextInt();

					roster[numPlayers] = new Player(fName, lName, jersey_num); //constructs a Player with names and number given by user
					numPlayers++; 																	    //new Player is stored in the next element of array

					System.out.println("\n**Player Created**\n");
					break;

				case 2: 
					System.out.println("\n**IUPUI Football Roster**");
				
					for (int i = 0; i < numPlayers; i++){  
						roster[i].printPlayer();  //prints all Players created by user
					}

					System.out.println("*************************\n");  //output formatting
					break;

				case 3:
					break;

				default:
					System.out.println("\nInvalid choice! Please select Option 1, 2, or 3.\n");
			}
		}

		if (numPlayers == 11){  //max roster size
			System.out.println("\nYour roster is now full! It is printed below.");
			System.out.println("\n**IUPUI Football Roster**");
			
			for (int j = 0; j < numPlayers; j++){
				roster[j].printPlayer();  //prints all 11 Players created by user

			}
		
			System.out.println("*************************\n");  //output formatting
		}
		
		for (int m = 0; m < numPlayers; m++){  //nested loop compares all Players in array
			for (int n = m + 1; n < numPlayers; n++){
				//check for duplicate names in the roster:
				if (roster[m].getLName().compareTo(roster[n].getLName()) == 0 && roster[m].getFName().compareTo(roster[n].getFName()) == 0){
					System.out.println("\nFYI: You have duplicated a player: " + roster[m].getFName() + " " + roster[m].getLName() + "\nRerun program to fix this if necessary.");
				}
				//check for duplicate jersey numbers in the roster:
				if (roster[m].getJerseyNum() == roster[n].getJerseyNum()){
					System.out.println("\nFYI: You have duplicated a jersey number: " + roster[m].getJerseyNum() + "\nRerun program to fix this if necessary.");
					n = numPlayers - 1;  //allows correct number of duplicates to be shown
				}
			}
		}
		
		System.out.println("\nThank you for using our program - Goodbye!\n");
	}		
}
