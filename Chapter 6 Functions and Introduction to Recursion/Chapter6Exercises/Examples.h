/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   Examples.h
 * Author: DELL
 *
 * Created on February 17, 2022, 8:24 PM
 */

#ifndef EXAMPLES_H
#define EXAMPLES_H

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
    
    Examples(const Examples& orig);
    virtual ~Examples();
private:

};

#endif /* EXAMPLES_H */

