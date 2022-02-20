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

template <typename T>
T Examples::product(T x1, T x2, T x3){
    return x1*x2*x3;
}

Examples::Examples(const Examples& orig) {
}

Examples::~Examples() {
}

