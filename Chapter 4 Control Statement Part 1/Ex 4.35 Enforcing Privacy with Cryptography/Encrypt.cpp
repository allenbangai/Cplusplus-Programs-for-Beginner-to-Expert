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

void Encrypt::setEncrypt(int encryptD){
    this->encryptData = encryptD;
}

int Encrypt::getEncrypt(){
    return this->encryptData;
}

int Encrypt::encrypt(int encryptD){
    string encryptAdd = "";
    int temp = encryptD;
    int length = to_string(encryptD).length();
    while(length > 0){
        int val = temp/(10^length-1);
        cout<<"val: "<<val<<endl;
        val = (val+7)%10;
    }
}

int Encrypt::decrypt(int decryptD){
    
}
Encrypt::Encrypt(const Encrypt& orig) {
}

Encrypt::~Encrypt() {
}

