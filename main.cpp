#include <iostream>
#include "guessGame.h"
#include "rps.h"
#include "dice.h"

using namespace std;

int main() {
    int game = 0;


    cout << "Choose a game\n";
    cout << "1) Number Guessing Game\n";
    cout << "2) Rock Paper Scissors\n";
    cout << "3) Dice Game\n";
    cout << "\nEnter your choice: \n";

    cin  >> game;
    cout << '\n';

    switch (game) {
    case 1:
        cout << "You choose: NUMBER GUESSING GAME\n";
        playGuessingGame();
        break;
    case 2:
        cout << "You choose: ROCK PAPER SCISSORS!\n";
        playRockPaper();
        break;
    case 3:
        cout << "You choose: DICE GAME\n";
        playDiceGame();
        break;
    default:
        cout << "Invalid choice!\n";
        break;
    }

    return 0;
}