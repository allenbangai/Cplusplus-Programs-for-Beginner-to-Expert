/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   Encrypt.cpp
 * Author: DELL
 * 
 * Created on January 13, 2022, 11:46 PM
 */

#include "Encrypt.h"

Encrypt::Encrypt() {
}

Encrypt::Encrypt(int encryptD) {
    setEncrypt(encryptD);
}

Encrypt::setEncrypt(int encryptD){
    this->encryptData = encryptD;
}

Encrypt::getEncrypt(){
    return this->encryptData;
}
Encrypt::Encrypt(const Encrypt& orig) {
}

Encrypt::~Encrypt() {
}

