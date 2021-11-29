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
//HeartRates constructor to initialize setters.
HeartRates::HeartRates(string firstName1, string secondName1, string dateOfBirth1, int presentDate1) {
    setFirstName(firstName1);
    setSecondName(secondName1);
    setDateOfBirth(dateOfBirth1);
    setPresentYear(presentDate1);
}

//creating getter and setter parameters for firstName, secondName, dateOfBirth
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

void HeartRates::setDateOfBirth(string dateOfBirth1){
    dateOfBirth = dateOfBirth1;
}
string HeartRates::getDateOfBirth(){
    return dateOfBirth;
}

void HeartRates::setYearOfBirth(int yearOfBirth1){
    yearOfBirth = yearOfBirth1;
}

//...setter to get present year...
void HeartRates::setPresentYear(int presentYear1){
    presentYear = presentYear1;
}

//...function to calculate present age of user...
int HeartRates::getAge(){
    return presentYear  - yearOfBirth;
}

//...get maximum heart rate...
int HeartRates::getMaximumHeartRate(){
    return 220 - getAge();
}

//...function to get target heart rate...
float HeartRates::getTargetHeartRate(){
    
    return 0.65*getMaximumHeartRate();
}

//...delete constructor heart rate
HeartRates::~HeartRates() {
}

