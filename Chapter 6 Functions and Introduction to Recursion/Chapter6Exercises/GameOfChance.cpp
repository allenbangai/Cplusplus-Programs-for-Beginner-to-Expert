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

GameOfChance::GameOfChance(const GameOfChance& orig) {
}

GameOfChance::~GameOfChance() {
}

