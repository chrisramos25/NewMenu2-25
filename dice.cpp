
#include <iostream>
#include <string>
#include <vector>
#include "dice.h"
using namespace std;

void playDiceGame() {
    // Word to guess (you can add more words later)
    string word = "computer";  
    string guessedWord(word.length(), '_'); // Initializes with underscores
    vector<char> wrongGuesses;
    int maxAttempts = 6; // max wrong guesses allowed
    int attempts = 0;
    char guess;

    cout << "=== Welcome to Guess the Word Game ===\n";
    cout << "Try to guess the word, one letter at a time!\n\n";

    // Game loop
    while (guessedWord != word && attempts < maxAttempts) {
        cout << "Word: " << guessedWord << "\n";
        cout << "Wrong guesses: ";
        for (char c : wrongGuesses) cout << c << " ";
        cout << "\nAttempts left: " << (maxAttempts - attempts) << "\n";

        cout << "Enter a letter: ";
        cin >> guess;

        // Check if guess is in the word
        bool correct = false;
        for (int i = 0; i < word.length(); i++) {
            if (word[i] == guess && guessedWord[i] == '_') {
                guessedWord[i] = guess;
                correct = true;
            }
        }

        if (!correct) {
            // Avoid counting same wrong letter twice
            bool alreadyGuessed = false;
            for (char c : wrongGuesses) {
                if (c == guess) {
                    alreadyGuessed = true;
                    break;
                }
            }
            if (!alreadyGuessed) {
                wrongGuesses.push_back(guess);
                attempts++;
            }
            cout << "Wrong guess!\n\n";
        } else {
            cout << "Good guess!\n\n";
        }
    }

    // End of game
    if (guessedWord == word) {
        cout << "Congratulations! You guessed the word: " << word << "\n";
    } else {
        cout << "Game over! The word was: " << word << "\n";
    }
}

