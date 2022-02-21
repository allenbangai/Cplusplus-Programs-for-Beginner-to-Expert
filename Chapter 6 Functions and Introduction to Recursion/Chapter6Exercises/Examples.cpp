/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   Examples.cpp
 * Author: Kamadje Allen
 * 
 * Created on February 17, 2022, 8:25 PM
 */

#include <complex>

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
    double val = 1.618034;
    double val1 = pow(val, num);
    val1 = val1 - pow(1-val, num);
    val1 = val1 / pow(5,0.5);
    return val1;
}

Examples::Examples(const Examples& orig) {
}

Examples::~Examples() {
}

/**
The fibonacci(0) is: 0
The fibonacci(1) is: 1
The fibonacci(2) is: 1
The fibonacci(3) is: 2
The fibonacci(4) is: 3
The fibonacci(5) is: 5
The fibonacci(6) is: 8
The fibonacci(7) is: 13
The fibonacci(8) is: 21
The fibonacci(9) is: 34
The fibonacci(10) is: 55
The fibonacci(11) is: 89
The fibonacci(12) is: 144
The fibonacci(13) is: 233
The fibonacci(14) is: 377
The fibonacci(15) is: 610
The fibonacci(16) is: 987
The fibonacci(17) is: 1597
The fibonacci(18) is: 2584
The fibonacci(19) is: 4181
The fibonacci(20) is: 6765
The fibonacci(21) is: 10946
The fibonacci(22) is: 17711
The fibonacci(23) is: 28657
The fibonacci(24) is: 46368
The fibonacci(25) is: 75025
The fibonacci(26) is: 121393
The fibonacci(27) is: 196418
The fibonacci(28) is: 317811
The fibonacci(29) is: 514229
The fibonacci(30) is: 832040
The fibonacci(31) is: 1346269
The fibonacci(32) is: 2178309
The fibonacci(33) is: 3524578
The fibonacci(34) is: 5702887
The fibonacci(35) is: 9227465
The fibonacci(36) is: 14930352
The fibonacci(37) is: 24157817
The fibonacci(38) is: 39088169
The fibonacci(39) is: 63245986
The fibonacci(40) is: 102334155
The fibonacci(41) is: 165580141
The fibonacci(42) is: 267914296
The fibonacci(43) is: 433494437
The fibonacci(44) is: 701408733
The fibonacci(45) is: 1134903170
The fibonacci(46) is: 1836311903

 */