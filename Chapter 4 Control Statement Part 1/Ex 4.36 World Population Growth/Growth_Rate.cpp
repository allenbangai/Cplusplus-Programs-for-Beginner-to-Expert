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

Growth_Rate::Growth_Rate(const Growth_Rate& orig) {
}

Growth_Rate::~Growth_Rate() {
}

