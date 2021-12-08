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
    //declaring constructor
    HealthProfile(string firstName, string secondName, string gender,
            string dateOfBirth, string height, string weight) ;

    string GetDateOfBirth() ;
    void SetDateOfBirth(string dateOfBirth);

    string GetFirstName();
    void SetFirstName(string firstName);

    string GetGender();
    void SetGender(string gender);

    string GetHeight();
    void SetHeight(string height);

    string GetSecondName();
    void SetSecondName(string secondName);

    string GetWeight();
    void SetWeight(string weight);

    HealthProfile();
    HealthProfile(const HealthProfile& orig);
    virtual ~HealthProfile();
private:
    string firstName;
    string secondName;
    string gender;
    string dateOfBirth;
    string height;
    string weight;
};

#endif /* HEALTHPROFILE_H */

