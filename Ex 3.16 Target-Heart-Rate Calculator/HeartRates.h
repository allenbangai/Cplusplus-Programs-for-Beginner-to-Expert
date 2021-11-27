/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <iostream>
#include <string>
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
    void dateOfBirth();
    void setYearOfBirth(int);
    void setMonth(int);
    void setDayOfBirth(int);
    void setPresentDate(int*);
    
    string getFirstName();
    string getSecondname();
    string dateOfBeing();
    int getYearOfBirth();
    int getMonth();
    int getDayOfBirth();
    int getAge();
    int getMaximumHeartRate();
    int getTargetHeartRate();
    
    virtual ~HeartRates();
private:
    string firstName;
    string lastName;
    string dateOfBirth;
    int yearOfBirth;
    int monthOfBirth;
    int dayOfBirth;
    int presentDate;
    int age;// month / day / year

};

#endif HEARTRATES_H
