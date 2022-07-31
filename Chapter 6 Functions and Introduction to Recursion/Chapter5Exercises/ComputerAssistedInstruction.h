//
// Created by Allen on 30/07/2022.
//

#include <iomanip>
#include <iostream>

#ifndef CHAPTER_6_FUNCTIONS_AND_INTRODUCTION_TO_RECURSION_COMPUTERASSISTEDINSTRUCTION_H
#define CHAPTER_6_FUNCTIONS_AND_INTRODUCTION_TO_RECURSION_COMPUTERASSISTEDINSTRUCTION_H


class ComputerAssistedInstruction {
private:
    int val1;
    int val2;

public:
    ComputerAssistedInstruction();

    bool productCheck();

    int getVal1() const;

    int getVal2() const;

    void setVal1(int val1);

    void setVal2(int val2);

    void start();
};


#endif //CHAPTER_6_FUNCTIONS_AND_INTRODUCTION_TO_RECURSION_COMPUTERASSISTEDINSTRUCTION_H
