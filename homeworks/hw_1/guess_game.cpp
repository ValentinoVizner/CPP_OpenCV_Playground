#include <cstdio>
#include <ostream>
#include <stdlib.h>
#include <iostream>
void play_game()
{
    unsigned long genNumber, guesNumber;

    //initialize random seed, resets value on every run
    srand (time(NULL));

    genNumber = rand() % 100;  // random number between 0-99
    std::cout << genNumber << std::endl;
    std::cout <<"Guess a number: " <<std::endl;

    while (true)
    {
        std::cin >> guesNumber;
        if(guesNumber == genNumber)
        {
            std::cout<<"You win!"<<std::endl;
            break;
        }
        else if (guesNumber < genNumber)
        {
            std::cout<<"Too low!"<<std::endl;
        }
        else
        {
            std::cout<<"Too high!"<<std::endl;
        }
        std::cout << "Guess another number: 50" << std::endl;
    }
}

int main(int argc, const char** argv) {
    play_game();
    return 0;
}