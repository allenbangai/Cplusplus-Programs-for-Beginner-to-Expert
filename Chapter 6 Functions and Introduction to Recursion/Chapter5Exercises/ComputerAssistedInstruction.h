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
    int constVal = 1;
    int val1;
    int val2;

public:
    ComputerAssistedInstruction();

    bool productCheck(int );

    auto getVal1() const;

    auto getVal2() const;

    void setVal1(int val1);

    void setVal2(int val2);

    void start();
};


#endif //CHAPTER_6_FUNCTIONS_AND_INTRODUCTION_TO_RECURSION_COMPUTERASSISTEDINSTRUCTION_H
