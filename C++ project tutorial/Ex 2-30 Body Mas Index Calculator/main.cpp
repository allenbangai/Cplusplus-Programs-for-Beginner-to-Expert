/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: DELL
 *
 * Created on March 14, 2021, 1:55 AM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

/*
 * This code is gotten from the exercise 2.30 of C++ How to Program 8th Edition
 * I believe it may be helpful to whom ever is interested of designing a BMI calculator
 */
int main(int argc, char** argv) {

    float BMI, MassInKg, HeightInMetres;
    
    cout<<"Body Mass Index (BMI) Calculator \n\n"<<endl;
    
    cout<< "Enter your body mass in kilogram:  ";
    cin>> MassInKg;
    cout<<" "<<endl;
    
    cout<< "Enter your body height in meters:  ";
    cin>> HeightInMetres;
    cout<<" "<<endl; 
    
    BMI = MassInKg / (HeightInMetres * HeightInMetres);
    
    if(BMI < 18.50){
        cout<< "Your BMI is: "<< setprecision(02)<< BMI << " and you are Underweight"<<endl;
    }else if(BMI >= 18.50 && BMI <= 24.99){
        cout<< "Your BMI is: "<< setprecision(02)<< BMI << " and you are Normal"<<endl;
    }else if(BMI >= 25.00 && BMI <= 29.99){
        cout<< "Your BMI is: "<< setprecision(02)<< BMI << " and you are Overweight"<<endl;
    }else if(BMI >= 30){
        cout<< "Your BMI is: "<< setprecision(02)<< BMI << " and you are Obese and should highly take care of yourself"<<endl;
    }
    return 0;
}

