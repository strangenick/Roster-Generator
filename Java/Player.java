//Honor Pledge: I pledge that I have neither
//given nor received any undue help on this assignment.
//
//strangni

//CS 240 - Assignment 3 - Roster Generator
//Created by: Nicholas Strange

public class Player{
	private String fName;   //Player's first name
	private	String lName;   //Player's last name
	private int jersey_num; //Player's jersey number
			
	public Player(){  //default constructor
	}
		
	public Player(String fName, String lName, int jersey_num){  //overloaded constructor; sets Player's private attributes
		this.fName = fName;
		this.lName = lName;	
		this.jersey_num = jersey_num;
		}
			
	public void printPlayer(){  //prints Player's attributes
		System.out.println(jersey_num + ") " + fName + " " + lName); 
	}

	public String getFName(){  //gets Player's first name
		return fName;
	}

	public String getLName(){  //gets Player's last name
		return lName;
	}

	public int getJerseyNum(){  //gets Player's jersey number
		return jersey_num;
	}
}
