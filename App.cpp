/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Spector Reese
 */

#include <iostream>
using namespace std;

int main()
{
    	//initialize input
	int input = 0;
	
	//prompt user
	cout << "Enter your number: \n";
	
	//save user input to 'input' variable
	cin >> input;
	
	//if modulo 2 = 0, it's even. If else, it's odd
	if (input % 2 == 0) {
		cout << input << "\n is even.\n";
	} else {
		cout << input << "\n is odd.\n";
	}
	
	//return
	return 0;
}
