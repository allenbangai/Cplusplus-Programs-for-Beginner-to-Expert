/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Kamadje Allen
 *
 * Created on December 11, 2021, 6:30 PM
 */

#include <cstdlib>
#include "Growth_Rate.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    Growth_Rate growthRate(0.011, 7.9, 75);
    
    growthRate.printPopulation();
    cout<<endl;
    growthRate.doublePopulation();

    growthRate.~Growth_Rate();
    return 0;
}

