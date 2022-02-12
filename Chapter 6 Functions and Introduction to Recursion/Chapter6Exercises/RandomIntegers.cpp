/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   RandomIntegers.cpp
 * Author: Kamadje Allen
 * 
 * Created on February 8, 2022, 11:58 PM
 */

#include "RandomIntegers.h"

RandomIntegers::RandomIntegers() {
    //scaleRandomIntegers();
}

RandomIntegers::RandomIntegers(int rolls){
    this->rolls = rolls;
}

RandomIntegers::RandomIntegers(const RandomIntegers& orig) {
}

void RandomIntegers::scaleRandomIntegers(){
    //loop 20 times
    for(int i=1; i<=20; i++){
        //pick random number from one to six
        cout<<setw(10)<<(1+rand()%6);
       
        //if counter is divisible by 5, start a new line
        if(i%5 == 0){
            cout<<endl;
        }
    }//end for
}//end method

int RandomIntegers::getRolls() {
    return rolls;
}

void RandomIntegers::setRolls(int rolls){
    this->rolls = rolls;
}
   
void RandomIntegers::freqRandomDie(){
    int freq1 = 0;//count of the first roll
    int freq2 = 0;
    int freq3 = 0;
    int freq4 = 0;
    int freq5 = 0;
    int freq6 = 0; //count of the 6 roll
    
    int face; //most used recently rolled value
    for(int roll = 1; roll<=getRolls(); roll++){
        face = 1 + rand()%6;
        
        //determine roll value 1-6 and increment appropriate counter
        switch(face){
            case 1:
                freq1++;
                break;
            case 2:
                freq2++;
                break;
            case 3:
                freq3++;
                break;
            case 4:
                freq4++;
                break;
            case 5:
                freq5++;
                break;
            case 6:
                freq6++;
                break;
        }
    }
    cout << "Face" << setw( 13 ) << "Frequency" << endl; // output headers
    cout << " 1" << setw( 13 ) << freq1
    << "\n 2" << setw( 13 ) << freq2
    << "\n 3" << setw( 13 ) << freq3
    << "\n 4" << setw( 13 ) << freq4
    << "\n 5" << setw( 13 ) << freq5
    << "\n 6" << setw( 13 ) << freq6 << endl;
}

void RandomIntegers::sRand(){
    unsigned seed;
    cout<<"Enter seed: ";
    cin>>seed;
    srand(seed); //seed random number generator
    
    //for loop
    for(int counter =1; counter <= 10; counter++){
        //pick random number from 1 to 6 and output it
        cout<<setw(10) << (1 + rand()%6);
        
        if(co