//
// Created by Allen on 30/07/2022.
//

#include <iomanip>
#include <iostream>
#include <random>
#include <cstdlib>

#ifndef CHAPTER_6_FUNCTIONS_AND_INTRODUCTION_TO_RECURSION_COMPUTERASSISTEDINSTRUCTION_H
#define CHAPTER_6_FUNCTIONS_AND_INTRODUCTION_TO_RECURSION_COMPUTERASSISTEDINSTRUCTION_H

using namespace std;

class ComputerAssistedInstruction {
private:
    float init, count = 0, countPass = 0;
    int constVal = 1, val1, val2;
    int choice, operation;
    int startRand, endRand;

    void response(bool);

    bool productCheck(int );

    auto getVal1() const;

    auto getVal2() const;

    void setDifficulty(int );

    void setOperation(int );

    void printOperation();

public:
    ComputerAssistedInstruction();

    void start();
};


#endif //CHAPTER_6_FUNCTIONS_AND_INTRODUCTION_TO_RECURSION_COMPUTERASSISTEDINSTRUCTION_H
