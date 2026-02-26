#include <iostream>
#include <cstdlib> //needed for rand
#include <ctime> //need for time()

void playRockPaper() {
    srand(time(0)); //creates sequence of random numbers based on the time of day 
 
    int userChoice = 0;
    int compChoice = rand() % 3 + 1;

    std::cout << "Rock, Paper, Scissors Game has been started...\n\n";
    std::cout << "Choose 1/Rock 2/Paper 3/Scissors\n";
    std::cin  >> userChoice;

    //turns the users input into its respective hand
    if (userChoice == 1) {
        std::cout << "You choose Rock\n";
    } else if (userChoice == 2) {
        std::cout << "You choose Paper\n";
    } else if (userChoice == 3)  {
        std::cout << "You choose Scissors\n";
    } else {
        std::cout << "Invalid Response\n";
    }

    //turns the computers input into its respective hand
    if (compChoice == 1) {
        std::cout << "Computer choose Rock\n";
    } else if (compChoice == 2) {
        std::cout << "Computer choose Paper\n";
    } else if (compChoice == 3)  {
        std::cout << "Computer choose Scissors\n";
    }



    //Determine winner, tie, win, loose

    if (userChoice == compChoice) {
        std::cout << "\nIt was a tie";
    } else if ((userChoice == 1 && compChoice == 3) || 
              (userChoice == 2 && compChoice == 1)  || 
              (userChoice == 3 && compChoice == 2)) {
                std::cout << "\nYou win!";
    } else { 
        std::cout << "\nYou lose!";         
    }
}





