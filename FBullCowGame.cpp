//
//  FBullCowGame.cpp
//  BullCowGame
//
//  Created by Daniel Delgado on 11/14/17.
//  Copyright © 2017 Daniel Delgado. All rights reserved.
//

#include "FBullCowGame.hpp"
#include <string>

using FString = std::string;
using int32 = int;

//FBullCowGame::FBullCowGame(FString name, FString difficulty){
//    FString playerName = name;
//    
//}

int32 FBullCowGame::getMaxTries() const{
    return MaxTries; //return the amount of tries each player has
}

void FBullCowGame::initiateGame(FString, FString) {
    
}

FString FBullCowGame::getGuess() const {
    return 0;
}

int32 FBullCowGame::myScore() const{
    return 0;
}

int32 FBullCowGame::countCorrect(FString){
    return 0;
}

int32 FBullCowGame::countWrong(FString){
    return 0;
}

bool FBullCowGame::isGameWon(FString){
    return false;
}

bool FBullCowGame::rightLength(FString){
    return false;
}
