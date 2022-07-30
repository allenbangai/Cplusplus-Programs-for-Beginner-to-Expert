/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime> //contains prototype for function time
/* 
 * File:   GameOfChance.h
 * Author: Kamadje Allen
 *
 * Created on February 12, 2022, 9:03 PM
 */
using namespace std;

#ifndef GAMEOFCHANCE_H
#define GAMEOFCHANCE_H

class GameOfChance {
public:
    GameOfChance();
    
    GameOfChance(const GameOfChance& orig);
    
    int rollDiece(); //roll dice, calculate and displace sum
    
    void playStart();//craps simulation
    
    virtual ~GameOfChance();
private:
    
};

#endif /* GAMEOFCHANCE_H */

