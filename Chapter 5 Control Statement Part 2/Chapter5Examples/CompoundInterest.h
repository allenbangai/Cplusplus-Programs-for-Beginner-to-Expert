/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.h to edit this template
 */

/* 
 * File:   CompoundInterest.h
 * Author: DELL
 *
 * Created on January 30, 2022, 12:51 AM
 */

#ifndef COMPOUNDINTEREST_H
#define COMPOUNDINTEREST_H

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

class CompInterest{
public:
    
    virtual ~CompInterest(){
        
    }    
private:
    double PValue;
    double rate;
    int numYears;
};


#endif /* COMPOUNDINTEREST_H */

