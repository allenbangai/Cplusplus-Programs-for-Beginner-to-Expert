/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

#include "CompoundInterest.h"
#include "GlobalWarmingQuiz.h"

using namespace std;


/* 
 * File:   main.cpp
 * Author: Kamadje Allen
 *
 * Created on January 30, 2022, 12:40 AM
 */
int main(int argc, char** argv) {
    CompInterest interest(10000.0, 0.05, 9);
    Quiz quizs(0);
    
    int choice;
    cout<<"Enter 1 for chapter 5 example"<<endl;
    cout<<"Enter 2 for Ex 5.30 of chapter 5"<<endl;
    cout<<"Enter 3 for Ex 5.31 of chapter 5"<<endl;
    cout<<"Enter 4 for Ex 5.32 of chapter 5"<<endl;
    cin>>choice;
    cout<<endl;
    switch(choice){
        case 1:      
            interest.printFinalVal();
            interest.~CompInterest();
            break;
        case 2:
            quizs.questions();
            quizs.printInfor();
            quizs.~Quiz();
            break;
        case 3:
            cout<<"No implementation for this exercise"<<endl;
            break;
        case 4:
            
            break;
    }
    
    return 0;
}

