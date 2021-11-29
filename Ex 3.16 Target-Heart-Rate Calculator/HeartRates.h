/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

/* 
 * File:   HeartRates.h
 * Author: DELL
 *
 * Created on March 15, 2021, 1:46 AM
 */

#ifndef HEARTRATES_H
#define HEARTRATES_H

class HeartRates {
public:
    HeartRates(string, string, string, int);
    
    void setFirstName(string);
    void setSecondName(string);
    void setDateOfBirth(string);
    void setYearOfBirth(int);
    void setPresentYear(int);
    
    string getFirstName();
    string getSecondname();
    string getName();
    string getDateOfBirth();
    int getAge();
    int getMaximumHeartRate();
    string getTargetHeartRate();
    
    virtual ~HeartRates();
private:
    string firstName;
    string lastName;
    string dateOfBirth;
    int yearOfBirth;
    int presentYear;
    int age;// month / day / year

};

#endif //HEARTRATES_H

