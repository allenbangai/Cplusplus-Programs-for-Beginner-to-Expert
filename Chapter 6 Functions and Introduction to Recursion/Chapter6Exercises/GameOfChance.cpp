/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   GameOfChance.cpp
 * Author: Kamadje Allen
 * 
 * Created on February 12, 2022, 9:03 PM
 */

#include "GameOfChance.h"

GameOfChance::GameOfChance() {
}

int GameOfChance::rollDiece(){
    //pick random die values
    int die1 = 1 + rand()%6;
    int die2 = 1 + rand()%6;
    
    int sum  = die1 + die2;
    
    //display result in this roll
    cout<<"Player rolled "<<die1<<" + "<<die2<<" = "<<sum<<endl;
    
    return sum;
}//end of method roll dice

/**
 * Code implementation for game of chance... The game start as follows
 * 
 * A player rolls two dice. Each die has six faces. These faces contain 1, 2, 3, 4, 5 and 6
 * spots. After the dice have come to rest, the sum of the spots on the two upward faces is
 * calculated. If the sum is 7 or 11 on the first roll, the player wins. If the sum is 2, 3 or
 * 12 on the first roll (called “craps”), the player loses (i.e., the “house” wins). If the sum
 * is 4, 5, 6, 8, 9 or 10 on the first roll, then that sum becomes the player’s “point.” To
 * win, you must continue rolling the dice until you “make your point.” The player loses
 * by rolling a 7 before making the point.
 */
void GameOfChance::playStart(){
    cout<<"Game start"<<endl;
    //ENUMERATION with constant that determines the game status
    enum Status{CONTINUE, WON, LOST};
    
    //point if no win or loss on the first role
    int myPoint;
    Status gameStatus; //can contain any of the game status
    
    //randomize random number generator using current time
    srand(time(0));
    
    int sumOfDice = rollDiece();//first roll of dice
    
    //determine the game status and point if needed
    switch( sumOfDice ){
        case 7:
        case 11:
            gameStatus = WON;
            break;
        case 2:
        case 3:
        case 12:
            gameStatus = LOST;
            break;
        default:
            gameStatus = CONTINUE;
            myPoint = sumOfDice;
            cout<<"My Points are: "<<myPoint<<endl;
            break;//optional at end of switch
    }
    
    //while game is not complete
    while ( gameStatus == CONTINUE) {
        sumOfDice = rollDiece();
        //determine game status
        if ( sumOfDice == myPoint) {
            gameStatus == WON;
        } else {
            if ( sumOfDice == 7) {
                gameStatus = LOST;
            }
        }
    }
    
    //display won or lost message
    if(gameStatus == WON){
        cout<<"Player Wins"<<endl;
    }else if(gameStatus == LOST){
        cout<<"Player Loses"<<endl;        
    }
}//end playStart

GameOfChance::GameOfChance(const GameOfChance& orig) {
}

GameOfChance::~GameOfChance() {
}

