/*
    This is the console executable that makes use of the BullCowClass
    In an MVC pattern, this is the view, and makes the UI possible. 
*/

#include <iostream>
#include <string>
#include "FBullCowGame.hpp"

//using substitution
using FText = std::string;
using int32 = int;

//Function Identifier
void GamePlay();
FText AskGuess(int32 userTry);
bool AskToPlayAgain();

FBullCowGame BCGame; // Instantiation of class

//Main Function
int main(){
    
    GamePlay();

    return 0;
}

//Print the intro to the players' console
void GamePlay(){
    
    int32 MaxTries = BCGame.getMaxTries();
    constexpr int32 WORD_LENGTH = 5;
    //constexpr int32 NUMBER_OF_TURNS = 5;
    FText userGuess;
    
    //Introduction
    std::cout << "Welcome to the Bulls and Cows, a fun word game\n";
    std::cout << "Can you guess the " << WORD_LENGTH 
              << " isogram that I am thinking of? You have " 
              << MaxTries << "tries\n" << std::endl;
    
    //Prompt the user for their guess, and prints them back for the number of turns they have. Then check if user wants to continue playing
    do {
        for(int32 CurrentTry = 1; CurrentTry <= MaxTries; CurrentTry++){
            
            userGuess = AskGuess(CurrentTry);
            
            //Print their guess on the console
            std::cout << "Your guess was: " << userGuess << std::endl;
            std::cout << std::endl;
        }
    }while(AskToPlayAgain());

    return;
}

//Prompt and Print the user's guess
FText AskGuess(int32 userTry){

    FText Guess = "";
    std::cout << "Try " << userTry << ". Enter your guess: ";
    std::getline(std::cin, Guess);
    
    return Guess;
}

//prompt the user to play again and check if it's true or false.
bool AskToPlayAgain(){

    FText Answer = "";
    bool retryGame;

    //prompt
    std::cout << "Would you like to play again? (Y/N): ";
    std::getline(std::cin, Answer);

    //check and return the boolean.
    retryGame = (Answer.at(0) == 'Y' || Answer.at(0) == 'y');
    return retryGame;
}
