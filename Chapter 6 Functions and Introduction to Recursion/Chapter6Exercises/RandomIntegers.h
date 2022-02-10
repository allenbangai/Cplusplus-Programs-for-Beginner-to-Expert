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
 * Author: DELL
 *
 * Created on February 8, 2022, 11:58 PM
 */

#ifndef RANDOMINTEGERS_H
#define RANDOMINTEGERS_H

class RandomIntegers {
public:
    RandomIntegers();
    
    RandomIntegers(int rolls);
    
    int getRolls() const {
        return rolls;
    }

    void setRolls(int rolls) {
        this->rolls = rolls;
    }
    
    RandomIntegers(const RandomIntegers& orig);
    
    void scaleRandomIntegers();
    
    void freqRandomDie();
    
    virtual ~RandomIntegers();
private:
    int rolls;
};

#endif /* RANDOMINTEGERS_H */

