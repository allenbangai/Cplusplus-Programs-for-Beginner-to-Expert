/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   Growth_Rate.cpp
 * Author: Kamadje Allen
 * 
 * Created on January 29, 2022, 12:18 PM
 */

#include "Growth_Rate.h"

Growth_Rate::Growth_Rate() {
}

Growth_Rate::Growth_Rate(float rate, int population, int numYears){
    SetNumYears(numYears);
    SetPopulation(population);
    SetRate(rate);
}

void Growth_Rate::SetNumYears(int numYears){
    this->numYears = numYears;
}

void Growth_Rate::SetPopulation(int population){
    this->population = population;
}

void Growth_Rate::SetRate(float rate){
    this->rate = rate;
}

int Growth_Rate::GetNumYears(){
    return this->numYears;
}

int Growth_Rate::GetPopulation(){
    return this->rate;
}

int Growth_Rate::GetPopulation(){
    return this->population;
}

void Growth_Rate::printPopulation(){
    int i = 0;
    int initialYr = GetPopulation();
    int nextYr, difference = 0;
    cout<<"In year "<<i+1<<" population was "<<initialYr<<
        " and increase in population was "<<difference<<endl;
    while (i<GetNumYears()) {
        i++;
        nextYr = initialYr + initialYr*GetRate();
        difference = nextYr - initialYr;
        cout<<"In year "<<i+1<<" population was "<<nextYr<<
        " and increase in population was "<<difference<<endl;
        initialYr = nextYr;
    }
}

int Growth_Rate::doublePopulation(){
    int initialPop = GetPopulation();
    int finalPop = initialPop;
    int i = 0; //for number of years
    while (finalPop >=  2*initialPop){
        finalPop = finalPop*GetRate();
        i++;
    }
    return finalPop;
}


Growth_Rate::Growth_Rate(const Growth_Rate& orig) {
}

Growth_Rate::~Growth_Rate() {
}

