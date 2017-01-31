// Honor Pledge: I pledge that I have neither 
// given nor receieved any help on this assignment.
// Reverse a word: Assignment #1
// David Haines

//import io and string
#include <stdio.h>
#include <string.h>

//label functions, use semi-colon after
void reversedWord (char [], int);

//call global variable i for recursion counter
int i = 0;


// This function uses recursion to reverse a word in C.
void reversedWord (char input [], int size)
{     
	//set temporary char for letter swap
	char t;

	//once i is greater than size, exit loop
	//that means that the char swapping will be on or passed middle letter in string
	if (i >= size)
    {
		//reset i to 0 in case the user wants to run it again
		i = 0;
		return;
    }
	
	//swap first and last letters using a temporary variable
	//set temp = input[i] in order save first char
	t = *(input+i);
	//set first char position to the last char in array
	*(input+i) = *(input + size);
	//set the last char position in the array to the char held in temp (original first char)
	*(input + size) = t;
	
	//increase counter by one in order to move to next position in array (to next unswapped char)
	//and recursion, have size decrease by one similar to i increasing by 1
	i = i + 1;
	reversedWord (input, size - 1);
}

// This is our main method that is responsible for running our program.
int main ()
{
	//keepGoing variable for continue button, set to 'Y' to run atleast once
	char keepGoing;
	keepGoing = 'Y';
	
	//run main loop until 'N' selected at end of main
	while (keepGoing != 'N')
	{
		
		//declare input with max char 100, declare size as int
		char input[100];
		int size;
		int i = 0;
		
		//input word to be reversed
		printf("Please enter a word: \n");
		scanf("%s", input);
		
		//set size = to length of input - 1 to account for array numbering
		size = strlen(input) - 1;
	
		//call reversed word function to run and print
		reversedWord (input, size);
		printf("Your word spelled backwards is: %s\n", input);
		
		//continue loop, only exits with N
		printf("Would you like to continue (Y|N)? \n");
		scanf("%s", &keepGoing);
	
	}
	
	return 0;
}

