/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */
#include <iostream>
#include <iomanip>
#include <cstdlib> //contains fucntion protype for rand

using namespace std;

/* 
 * File:   RandomIntegers.h
 * Author: Kamadje
 *
 * Created on February 8, 2022, 11:58 PM
 */

#ifndef RANDOMINTEGERS_H
#define RANDOMINTEGERS_H

class RandomIntegers {
public:
    RandomIntegers();
    
    RandomIntegers(int rolls);
    
    int getRolls();

    void setRolls(int rolls);
    
    void scaleRandomIntegers();
    
    void freqRandomDie();
    
    RandomIntegers(const RandomIntegers& orig);
    virtual ~RandomIntegers();
private:
    int rolls;
};

#endif /* RANDOMINTEGERS_H */

