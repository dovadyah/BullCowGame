//
//  FBullCowGame.hpp
//  BullCowGame
//
//  Created by Daniel Delgado on 11/14/17.
//  Copyright © 2017 Daniel Delgado. All rights reserved.
//

#ifndef FBullCowGame_hpp
#define FBullCowGame_hpp

#include <stdio.h>
#include <string>

//Count of bulls and counts 
struct BullCowCount{
    int Bulls = 0;
    int Cows = 0;
};

//main class
class FBullCowGame {
    
//Public variables and methods in class
public:
    //FBullCowGame(); //Constructor
    int getMaxTries() const;
    void initiateGame(std::string, std::string);
    std::string getGuess() const;
    int myScore() const;
    int countCorrect(std::string);
    int countWrong(std::string);
    bool isGameWon(std::string);
    bool rightLength(std::string);

//Private variables and methods in class
private:
    int setDifficulty();
    int MaxTries = 5;
    
};

#endif /* FBullCowGame_hpp */
