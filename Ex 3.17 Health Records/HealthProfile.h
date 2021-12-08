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
 * File:   HealthProfile.h
 * Author: DELL
 *
 * Created on December 6, 2021, 12:45 PM
 */

#ifndef HEALTHPROFILE_H
#define HEALTHPROFILE_H

class HealthProfile {
public:
    HealthProfile(string firstName, string secondName, string gender, string dateOfBirth) :
    firstName(firstName), secondName(secondName), gender(gender), dateOfBirth(dateOfBirth) {
    }

    HealthProfile();
    HealthProfile(const HealthProfile& orig);
    virtual ~HealthProfile();
private:
    string firstName;
    string secondName;
    string gender;
    string dateOfBirth;
    string height and
};

#endif /* HEALTHPROFILE_H */

