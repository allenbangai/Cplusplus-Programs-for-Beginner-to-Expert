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
    
    //function prototype that specifies default arguement
    int boxVolume(int lenght = 1, int width = 1, int height = 1);
    
    Examples(const Examples& orig);
    virtual ~Examples();
private:

};

#endif /* EXAMPLES_H */

