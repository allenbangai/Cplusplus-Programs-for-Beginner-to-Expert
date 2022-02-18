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

Examples::Examples(const Examples& orig) {
}

Examples::~Examples() {
}

