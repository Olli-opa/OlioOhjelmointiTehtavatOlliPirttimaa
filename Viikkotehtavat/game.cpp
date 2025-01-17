#include "game.h"

Game::Game(int maxNum)
{
    maxNumber = maxNum;

    cout << "Game konstruktori "
        << "maxNumber on "
        << maxNumber
         << endl;
}

Game::~Game()
{
    cout << "Game destruktori" << endl;
}

void Game::play()
{
    cout << "Game play" << endl;
    numOfGuesses = 0;
    randomNumber = 0;
    playerGuess = 0;
    srand(time(NULL));
    randomNumber = rand() % maxNumber;
    while(playerGuess != randomNumber){
        numOfGuesses++;
        cout << "Anna arvaus valilta 1-" << maxNumber << endl;
        cin >> playerGuess;

        if (playerGuess < randomNumber){
            cout << "Luku on suurempi" << endl;
        }else if (playerGuess > randomNumber){
            cout << "Luku on pienempi" << endl;
        }else if (playerGuess == randomNumber){
            cout << "Luku on oikein" << endl;
        }
    }
    return printGameResult();
}

void Game::printGameResult()
{
    cout << "Sinun arvauksesi: "
         << numOfGuesses
         << endl;
}
