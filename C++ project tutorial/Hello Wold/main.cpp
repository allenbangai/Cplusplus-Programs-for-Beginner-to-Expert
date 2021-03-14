/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: DELL
 *
 * Created on March 11, 2021, 2:29 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    float fvalue = 14.7;
    
    cout<< setprecision(20) << fixed << fvalue<< endl;
    cout<< "size of float: " << sizeof(float) << endl; 
    
    double dvalue = 14.3432345;
    cout<< setprecision(21) << fixed << dvalue <<endl;
    cout<< "size of double: "<< sizeof(double)<<endl;
    
    long double ldvalue = 134.3432345;
    cout << setprecision(21) << fixed << ldvalue<<endl;
    cout<< "size of long double: "<< sizeof(ldvalue)<<endl;
    
    cout<< "Hello World, my name is Kamadje Allen!"<<endl;
    
    return 0;
}

