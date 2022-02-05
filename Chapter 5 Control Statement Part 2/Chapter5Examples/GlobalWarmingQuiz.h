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
        cout<<"Which gas contribute to global warming "
                "\nA) Carbon Dioxide B) Oxygen C) Nitrogen "<<endl;
        cin>>val;
        userInput[0] = val;
        cout<<"\nWhich of the following process releases more gas for global warming"
                "\nA) Hydrolysis B) Combustion C) Biomass"<<endl;
        cin>>val;
        userInput[1] = val;
        cout<<"\nWhich of the following is a way to prevent for biogas"
                "\nA)Exaction of oxygen from water, B) Forestation C) Deforestation"<<endl;
        cin>>val;
        userInput[2] = val;        
    }
    
    void printInfor(){
        string val;
        for(int i=0; i<sizeof(answers); i++){
            if(userInput[i] == answers[i]){
                val = "correct";
            }else{
                val = "wrong";
            }
            cout<<"The "<<i+1<<" answer is "<<val<<endl;
        }
        
    }
    
private:
    int answersVal = 0;
    char userInput[] = {};
    char answers[] = {'A', 'B', 'B'};    
};

#endif /* GLOBALWARMINGQUIZ_H */

