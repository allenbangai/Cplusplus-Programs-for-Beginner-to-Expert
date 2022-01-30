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
#include <cstdlib>
#include <iomanip>
#include <cmath>
using namespace std;

class CompInterest{
public:
    CompInterest(double PValue, double rate, int numYears){
        SetPValue(PValue), SetRate(rate), SetNumYears(numYears);
    }
        
    double GetPValue() const {
        return PValue;
    }

    void SetPValue(double PValue) {
        this->PValue = PValue;
    }

    int GetNumYears() const {
        return numYears;
    }

    void SetNumYears(int numYears) {
        this->numYears = numYears;
    }

    double GetRate() const {
        return rate;
    }

    void SetRate(double rate) {
        this->rate = rate;
    }
    
    void printFinalVal(){
        cout<<fixed<<setprecision(3)<<endl;
        double FValue = PValue * pow(1 + GetRate(), GetNumYears());
        cout<<"After "<<GetNumYears()<<" years the final value interest for "
                <<GetPValue()<<" with rate of "<<GetRate()<<" will be "<<FValue<<endl;
    }

    virtual ~CompInterest(){
    }    
private:
    double PValue;
    double rate;
    int numYears;
};


#endif /* COMPOUNDINTEREST_H */

