/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.h to edit this template
 */

/* 
 * File:   GlobalWarmingQuiz.h
 * Author: Kamadje Allen
 *
 * Created on January 30, 2022, 10:02 PM
 */

#ifndef GLOBALWARMINGQUIZ_H
#define GLOBALWARMINGQUIZ_H

#include <iomanip>
#include <iostream>

using namespace std;

class Quiz{   
public:
    Quiz(){
        
    }
    
    void questions(){
        char val = 'a';
        cout<<"Which Gas contribute to global warming \nA) Carbon Dioxide B) Oxygen C) Nitrogen "<<endl;
        cin>>val;
        cout<<"\nWhich of the following process releases more gas for global warming"
                ""<<endl;
        cin>>val;
        cout<<"\nWhich of the following is a way to prevent for biogas"
                ""<<endl;        
    }
    
    void printInfor(){
        
    }
    
private:
    int i = 0;
    char userInput = {};
    char answers[] = {'A', 'B', 'A'};    
};

#endif /* GLOBALWARMINGQUIZ_H */

