// Honor Pledge: I pledge that I have neither 
// given nor receieved any help on this assignment.
// Reverse a word: Assignment #1
// David Haines

//import io and string
#include <stdio.h>
#include <string.h>

//label functions, use semi-colon after
void reversedWord (char [], int);

// This function uses recursion to reverse a word in C.
void reversedWord (char input [], int size)
{     
	char temp;
	int* ptrI = 0;
	
	if (*ptrI > size)
    {
        return;
    }
	
	
	temp = input[*ptrI];
	input[*ptrI] = input[size - *ptrI];
	input[size - *ptrI] = temp;

	
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

