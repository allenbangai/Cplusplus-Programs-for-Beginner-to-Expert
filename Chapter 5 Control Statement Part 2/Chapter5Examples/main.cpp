/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

#include "CompoundInterest.h"


/* 
 * File:   main.cpp
 * Author: DELL
 *
 * Created on January 30, 2022, 12:40 AM
 */

#include "CompoundInterest.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    CompInterest interest(10000.0, 0.05, 9);
    
    interest.printFinalVal();
    interest.~CompInterest();
    return 0;
}

