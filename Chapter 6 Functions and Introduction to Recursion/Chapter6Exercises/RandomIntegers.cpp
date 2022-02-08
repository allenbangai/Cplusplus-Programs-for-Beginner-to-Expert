/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   RandomIntegers.cpp
 * Author: DELL
 * 
 * Created on February 8, 2022, 11:58 PM
 */

#include "RandomIntegers.h"

RandomIntegers::RandomIntegers() {
    scaleRandomIntegers();
}

RandomIntegers::RandomIntegers(const RandomIntegers& orig) {
}

void RandomIntegers::scaleRandomIntegers(){
    //loop 20 times
    for(int i=0; i<20; i++){
        //pick random number from one to six
        cout<<setw(10)<<(1+rand()%6);
       
        //if counter is divisible by 5, start a new line
        if(i%5 == 0){
            cout<<endl;
        }
    }//end for
}//end method

RandomIntegers::~RandomIntegers() {
}

