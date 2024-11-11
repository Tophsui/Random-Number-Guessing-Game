#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()

int main() {
    // Seed the random number generator
    srand(time(0));

    // Generate a random number between 1 and 100
    int randomNumber = rand() % 100 + 1;

    int userGuess = 0;
    int attempts = 0;

    std::cout << "Welcome to the Random Number Guessing Game!\n";
    std::cout << "I have generated a random number between 1 and 100.\n";
    std::cout << "Try to guess the number.\n";

    // Loop until the user guesses the correct number
    while (userGuess != randomNumber) {
        std::cout << "Enter your guess: ";
        std::cin >> userGuess;
        attempts++;

        // Check if the guess is too high, too low, or correct
        if (userGuess > randomNumber) {
            std::cout << "Too high, try again.\n";
        }
        else if (userGuess < randomNumber) {
            std::cout << "Too low, try again.\n";
        }
        else {
            std::cout << "Congratulations! You guessed the correct number in " << attempts << " attempts.\n";
        }
    }

    return 0;
}