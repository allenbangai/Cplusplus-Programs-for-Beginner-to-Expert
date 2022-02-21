/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */
#include <iostream>
/* 
 * File:   Examples.h
 * Author: DELL
 *
 * Created on February 17, 2022, 8:24 PM
 */

#ifndef EXAMPLES_H
#define EXAMPLES_H

using namespace std;

class Examples {
public:
    Examples();
    
    /**
     * Method prototype that specifies default argument for finding volume of a box
     * @param length
     * @param width
     * @param height
     * @return 
     * length*width*height
     */
    int boxVolume(int length = 1, int width = 1, int height = 1);
    
    /**
     * Square method that takes a integer as input parameter 
     * and return the square of that integer as output parameter
     * @param val
     * @return 
     * val*val
     */
    int square(int val);
    
    /**
     * Square method that takes a double (decimal number) as input parameter 
     * and return the square of that double as output parameter
     * @param val
     * @return 
     * val*val
     */
    double square(double val);

    /**
     * Template function product to implement the product of 3 number being passed as argument
     * @param x1
     * @param x2
     * @param x3
     * @return 
     * It returns the product of the three imported parameters that is 
     * x1*x2*x3
     */
    template < typename T >
    T product(T x1, T x2, T x3){
        return x1*x2*x3;
    }
    
    /**
     * Recursive definition of function factorialR.
     * The function factorialR takes a number as input parameter and returns it factorial.
     * @param num
     * @return 
     */
    unsigned long factorialR( unsigned long num);
    
    /**
     * No recursive definition of function factorial. 
     * Though factorial has a recursive implementation by use of a for loop.
     * The function factorialR takes a number as input parameter and returns it factorial.
     * @param num
     * @return 
     */
    unsigned long factorial( unsigned long num);
    
    unsigned long fibonacci(uni)
    Examples(const Examples& orig);
    virtual ~Examples();
private:

};

#endif /* EXAMPLES_H */

