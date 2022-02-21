/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   Examples.cpp
 * Author: DELL
 * 
 * Created on February 17, 2022, 8:25 PM
 */

#include "Examples.h"

Examples::Examples() {
}

int Examples::boxVolume(int length, int width, int height){
    return height * width * length;
}

int Examples::square(int val){
    return val*val;
}

double Examples::square(double val){
    return val*val;
}

unsigned long Examples::factorial(unsigned long num){
    int val = 1;
    for (int i = 0; i < num; i++)
    {
        val = val*(num-i);
    }
    return val;    
}//end factorial

unsigned long Examples::factorialR(unsigned long num){
    if(num <= 1){
        return num;
    }else{
        return num * factorialR(num - 1);
    }
}//end factorialR

unsigned long Examples::fibonacci(unsigned long num){
    if(num == 0 || num == 1){
        return num;
    }else{
        return fibonacci(num-1) + fibonacci(num-2);
    }
}//end fibonacci

unsigned long Examples::fibonacci1(unsigned long num){
    
}

Examples::Examples(const Examples& orig) {
}

Examples::~Examples() {
}

