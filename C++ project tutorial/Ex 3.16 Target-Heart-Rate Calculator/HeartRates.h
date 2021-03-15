/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <iostream>
#include <string>

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
    HeartRates(string, string, int*, int*);
    
    void setFirstName(string);
    void setSecondName(string);
    void setDateOfBirth(int*);
    void setPresentDate(int*);
    
    string getFirstName();
    string getSecondname();
    int *getDateOfBirth();
    int getAge();
    int getMaximumHeartRate();
    int getTargetHeartRate();
    
    virtual ~HeartRates();
private:
    string firstName;
    string lastName;
    int *dateOfBirth;
    int *presentDate;
    int age;// month / day / year

};

#endif /* HEARTRATES_H */

