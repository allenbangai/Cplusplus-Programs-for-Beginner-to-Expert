/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
/* 
 * File:   GameOfChance.h
 * Author: Kamadje Allen
 *
 * Created on February 12, 2022, 9:03 PM
 */

#ifndef GAMEOFCHANCE_H
#define GAMEOFCHANCE_H

class GameOfChance {
public:
    GameOfChance();
    
    GameOfChance(const GameOfChance& orig);
    
    int rollDiece(); //roll dice, calculate and displace sum
    
    virtual ~GameOfChance();
private:
/**
 * 
 * https://youtu.be/ghOSOCZ3TWc
 * https://www.youtube.com/watch?v=CWCMGIG1Y54
 * https://www.youtube.com/watch?v=NX_Z-OKCHHU
 * https://www.youtube.com/watch?v=NX_Z-OKCHHU
 * https://www.youtube.com/watch?v=CaLyz6tRXIM 
 */
};

#endif /* GAMEOFCHANCE_H */

