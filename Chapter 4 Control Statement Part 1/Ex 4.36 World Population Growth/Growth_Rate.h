/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   Growth_Rate.h
 * Author: Kamadje Allen
 *
 * Created on January 29, 2022, 12:18 PM
 */

#ifndef GROWTH_RATE_H
#define GROWTH_RATE_H

class Growth_Rate {
public:
    Growth_Rate();

    Growth_Rate(float rate, int population, int numYears);

    int GetNumYears();

    void SetNumYears(int numYears);

    int GetPopulation();

    void SetPopulation(int population);

    float GetRate();

    void SetRate(float rate);
    
    void printPopulation();
    
    int doublePopulation();
    
    Growth_Rate(const Growth_Rate& orig);
    virtual ~Growth_Rate();
private:
    float rate;
    int population;
    int numYears;

};

#endif /* GROWTH_RATE_H */

