#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    int secretNumber = std::rand() % 100 + 1;

    int userGuess = 0;

    std::cout << "Welcome to the Guess the Number game!\n";
    std::cout << "I have chosen a number between 1 and 100. Can you guess it?\n";

    while (userGuess != secretNumber) {
        std::cout << "Enter your guess: ";
        std::cin >> userGuess;
        if (userGuess < secretNumber) {
            std::cout << "Too low! Try again.\n";
        } else if (userGuess > secretNumber) {
            std::cout << "Too high! Try again.\n";
        } else {
            std::cout << "Congratulations! You guessed the correct number, " << secretNumber << "!\n";
        }
    }

    return 0;
}
