/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

/* 
 * File:   Encrypt.h
 * Author: DELL
 *
 * Created on January 13, 2022, 11:46 PM
 */

#ifndef ENCRYPT_H
#define ENCRYPT_H

class Encrypt {
public:
    Encrypt();
    Encrypt(int );
    Encrypt(const Encrypt& orig);
    
    int encrypt(int );
    int decrypt(int );
    virtual ~Encrypt();
private:
    int encryptData;
};

#endif /* ENCRYPT_H */

