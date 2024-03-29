#include <iostream>
#include "Random.h"

void ignoreLine() {
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void game() {
    std::cout << "Let\'s play a game. I'm thinking of a number between 1 and 100. You have 7 tries to guess what it is.\n";

    int randomNumber = Random::get(1u, 100u);

    for (int i = 1; i <= 7; i++) {
        std::cout << "Guess #" << i << ": ";
        int guess;
        std::cin >> guess;
        if (std::cin.fail()) {
            std::cin.clear();
            ignoreLine();
            std::cout << "Invalid Input\n";
            i--;
            continue;
        }
        ignoreLine();
        if (guess < 0 || guess > 100) {
            std::cout << "Invalid Input\n";
            i--;
            continue;
        }
        if (guess < randomNumber) {
            std::cout << "Your guess is too low.\n";
            continue;
        }
        if (guess > randomNumber) {
            std::cout << "Your guess is too high.\n";
            continue;
        }
        if (guess == randomNumber) {
            std::cout << "Correct! You Win!\n";
            return;
        }
    }

    std::cout << "Sorry, you lose. The correct number was " << randomNumber << ".\n";
}

void gameLoop() {
    bool playAgain = true;

    game();

    while (playAgain) {
        std::cout << "Would you like to play again (y/n)? ";
        std::cin.sync();
        char response;
        std::cin >> response;
        if (std::cin.fail()) {
            std::cin.clear();
            ignoreLine();
            std::cout << "Invalid Input\n";
            continue;
        }
        ignoreLine();
        if (response != 'y' && response != 'n') {
            std::cout << "Invalid Input\n";
            continue;
        }
        if (response == 'n') {
            break;
        }
        game();
    }

    std::cout << "Thank you for playing\n";

}

int main() {

    gameLoop();

    return 0;
}