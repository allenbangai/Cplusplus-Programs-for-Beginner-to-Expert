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
win, you must continue rolling the dice until you “make your point.” The player loses
by rolling a 7 before making the point.
 */
void GameOfChance::playStart(){
    
}

GameOfChance::GameOfChance(const GameOfChance& orig) {
}

GameOfChance::~GameOfChance() {
}

