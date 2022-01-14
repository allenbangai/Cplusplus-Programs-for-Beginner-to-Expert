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

Encrypt::Encrypt(int encryptD, int i) {
    if(i == 0){
        encrypt(encryptD);
    }else{
        decrypt(encryptD);
    }
}


int Encrypt::encrypt(int encryptD){
    int temp = encryptD;
    int length = to_string(encryptD).length();
    int tempLength = length;
    int i = 0;
    int encryptArray[length], tempArray[length];
    
    cout<<"length: "<<length<<endl;
    //ENCRYPT INT VALUE AND SAVE EACH DIGIT IN AN ARRAY
    while(length > 0){
        cout<<"temp: "<<temp<<endl;
        int val = temp/(pow10(length-1));
        temp = temp - (val*(pow10(length-1)));
        val = (val+7)%10;
        cout<<"val: "<<val<<endl;
        encryptArray[i] = val;
        i++;
        length--;
    }
    //Swapping encrypted number for further encryption
    tempArray[0] = encryptArray[2];
    tempArray[1] = encryptArray[3];
    tempArray[2] = encryptArray[0];
    tempArray[3] = encryptArray[1];
    
    //adding digit in array to an integer with respect to significant values
    temp = 0;
    i = 0;
    while(tempLength > 0){
        int val = tempArray[i]*pow10(tempLength-1);
        temp = temp + val;
        cout<<"tempArray[i]: "<<tempArray[i]<<endl;
        cout<<"temp: "<<temp<<endl;
        tempLength--; 
        i++;
    }
    cout<<"Encrypted integer is: "<<temp<<endl;
    
    return temp;
}

int Encrypt::decrypt(int decryptD){
    int length = to
}

int Encrypt::pow10(int pow){
    int val = 1;
    for(int i = 0; i < pow; i++){
        val = val*10;
    }
    return val;
}

Encrypt::Encrypt(const Encrypt& orig) {
}

Encrypt::~Encrypt() {
}

