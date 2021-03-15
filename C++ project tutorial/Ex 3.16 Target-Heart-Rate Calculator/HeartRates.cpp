/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   HeartRates.cpp
 * Author: DELL
 * 
 * Created on March 15, 2021, 1:46 AM
 */

#include "HeartRates.h"

HeartRates::HeartRates(string firstName1, string secondName1, int* dateOfBirth1, int* presentDate1) {
    setFirstName(firstName1);
    setSecondName(secondName1);
    setDateOfBirth(dateOfBirth1);
    setPresentDate(presentDate1);
}

void HeartRates::setFirstName(string firstName1){
    firstName = firstName1;
}
string HeartRates::getFirstName(){
    return firstName;
}

void HeartRates::setSecondName(string lastName1){
    lastName = lastName1;
}
string HeartRates::getSecondname(){
    return lastName;
}

void HeartRates::setDateOfBirth(int* dateOfBirth1){
    dateOfBirth = dateOfBirth1;
}
int* HeartRates::getDateOfBirth(){
    return dateOfBirth;
}

void HeartRates::setPresentDate(int* presentDate1){
    presentDate = presentDate1;
}
int HeartRates::getAge(){
    age = presentDate[3] - dateOfBirth[3];
    int presentAge = age;
    return presentAge;
}




HeartRates::~HeartRates() {
}

