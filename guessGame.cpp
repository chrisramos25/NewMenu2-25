#include <iostream>
#include "guessGame.h"
#include <cstdlib> //allows for srand and rand functions to be used
#include <ctime>
#include "continue.h"

using namespace std;

void playGuessingGame() {

	//resumePlaying();

	srand(time(0)); //starting (seed) for random numbers with rand() (time(0) so that it gives a different seed each time)
	int secretNumber = rand() % 9 + 1; //generates random number between 1 and 10
	int userGuess = 0;
	int attempts = 0;
	 
	cout << "\nI have selected a number between 1 and 10. Can you guess it?\n";


	do {
		cin >> userGuess;
		attempts++;
		if (userGuess < secretNumber)
			cout << "Incorrect, too low\n";
		else if (userGuess > secretNumber)
			cout << "Incorrect, too high\n";
	} while (userGuess != secretNumber);

	cout << "You got it!\n";
	cout << "It took you " << attempts << " attempts";
}