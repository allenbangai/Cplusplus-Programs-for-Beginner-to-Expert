/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   Growth_Rate.h
 * Author: DELL
 *
 * Created on January 29, 2022, 12:18 PM
 */

#ifndef GROWTH_RATE_H
#define GROWTH_RATE_H

class Growth_Rate {
public:
    Growth_Rate();

    Growth_Rate(float rate, int population, int numYears) :
        rate(rate), population(population), numYears(numYears) {
    }


    int GetNumYears() const {
        return numYears;
    }

    void SetNumYears(int numYears) {
        this->numYears = numYears;
    }

    int GetPopulation() const {
        return population;
    }

    void SetPopulation(int population) {
        this->population = population;
    }

    float GetRate() const {
        return rate;
    }

    void SetRate(float rate) {
        this->rate = rate;
    }

    Growth_Rate(const Growth_Rate& orig);
    virtual ~Growth_Rate();
private:
    float rate;
    int population;
    int numYears = 75;

};

#endif /* GROWTH_RATE_H */

