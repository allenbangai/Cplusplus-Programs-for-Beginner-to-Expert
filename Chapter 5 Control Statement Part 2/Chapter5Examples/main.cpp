/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

#include "CompoundInterest.h"

using namespace std;


/* 
 * File:   main.cpp
 * Author: Kamadje Allen
 *
 * Created on January 30, 2022, 12:40 AM
 */
int main(int argc, char** argv) {
    int choice;
    cin<<choice;
    switch(choice){
        case 1:
            CompInterest interest(10000.0, 0.05, 9);

            interest.printFinalVal();
            interest.~CompInterest();
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
    }

    
    return 0;
}

