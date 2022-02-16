/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Kamadje Allen
 *
 * Created on February 8, 2022, 1:26 AM
 */
#include "RandomIntegers.h"
#include "GameOfChance.h"
#include <cstdlib>

using namespace std;

inline double cube(const double side){
    return side*side*side;
}

/*
 * 
 */
int main(int argc, char** argv) {
    int choice;
    cout<<"Enter of choice of program u wish to run"<<endl;
    cin>>choice;
    
    
    switch(choice){
        case 1:
            RandomIntegers().scaleRandomIntegers();
            break;
        case 2:
            RandomIntegers(100).freqRandomDie();
            break;
        case 3:
            RandomIntegers().sRand();
            break;
        case 4:
            GameOfChance().playStart();
            break;
        case 4:
            cout<<"The cube of the float value is "<<cube<<" is: "<<
            break;
    }
    return 0;
}

