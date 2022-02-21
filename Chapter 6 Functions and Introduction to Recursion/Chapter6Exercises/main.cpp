/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Kamadje Allen
 *
 * Created on February 8, 2022, 1:26 AM
 */
#include "RandomIntegers.h"
#include "GameOfChance.h"
#include "Examples.h"
#include <cstdlib>

using namespace std;

/**
 * Creating an Inline method allows you to define and declare the method before the main
 * @param side
 * It takes as parameter one side of a cube
 * @return 
 * It returns the product of the one side to have the volume of the cube
 */
inline double cube(const double side){
    return side*side*side;
}

/*
 * 
 */
int main(int argc, char** argv) {
    int choice;
    int val, val1;
    int square;
    cout<<"Enter of choice of program u wish to run"<<endl;
    cin>>choice;
    
    
    switch(choice){
        case 1:
            RandomIntegers().scaleRandomIntegers();
            break;
        case 2:
            RandomIntegers(100).freqRandomDie();
            break;
        case 3:
            RandomIntegers().sRand();
            break;
        case 4:
            GameOfChance().playStart();
            break;
        case 5:
            float side;
            cout<<"Enter the side for which u wish to find it cube"<<endl;
            cin>>side;
            cout<<endl;
            cout<<"The cube of the entered value is "<<side<<" is: "<< cube(side);
            break;
        case 6:
            int volume;
            volume = Examples().boxVolume();
            cout<<"Default volume of the box is: "<<volume<<endl;
            volume = Examples().boxVolume(2);
            cout<<"The volume of the box with length 2 is: "<<volume<<endl;
            volume = Examples().boxVolume(2, 2);
            cout<<"The volume of the box with length 2 and width 2 is: "<<volume<<endl;
            volume = Examples().boxVolume(20, 2, 2);
            cout<<"The volume of the box with length 20, width 2 and height 2 is: "<<volume<<endl;
            break;
        case 7:
            cout<<"The product of 1, 2 and 3 with no implicit template cast is: "<<Examples().product(1, 2, 3)<<endl;
            cout<<"The product of 1.5, 2.5 and 3.5 with int cast as template as <int> is: "<<Examples().product<int>(1.5, 2.5, 3)<<endl;
            cout<<"The product of 1.5, 2.5 and 3.5 with no implicit template cast is: "<<Examples().product(1.5, 2.5, 3.5)<<endl;
            break;
        case 8:
            cout<<"Answer is: "<<Examples().square(12)<<endl;
            cout<<"Answer is: "<<Examples().square(8.5)<<endl;
            break;
        case 9:
            /**
             * Implementing method factorial() from Examples.h
             * @param argc
             * @param argv
             * @return 
             */
            cout<<"Enter value of factorial you wish to find: ";
            cin>>val;
            cout<<endl;
            cout<<"The factorial of "<<val<<" is: "<<Examples().factorial(val)<<endl;
            cout<<"Enter value of factorial you wish to find for a second time: ";
            cin>>val;
            cout<<endl;
            cout<<"The factorial of "<<val<<" is: "<<Examples().factorialR(val)<<endl;
            break;
        case 10:
            /**
             * Implementing method fatorialR() from Examples.h
             * Not that, val > val1
             * @param argc
             * @param argv
             * @return 
             */
            cout<<"Enter range of values you wish to find their factorial \n"
                    "Where the first value should be larger than the second one: ";
            cin>>val;    cout<<endl;
            cin>>val1;    cout<<endl;
            for(int i = val; i <= val1; i++){
                cout<<setw(3)<<i<<"! = "<<Examples().factorialR(i)<<endl;
            }
            break;
        default:
            cout<<"Wrong choice"<<endl;
            break;
    }
    return 0;
}

