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
    //empty constructor
    HealthProfile();
    
    //declaring constructor
    HealthProfile(string firstName, string secondName, string gender,
            string dateOfBirth, string height, string weight) ;

    /**
     * Getter and Setter methods for private variable of class Health Profile
     * @return 
     */
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

    /**
     * Methods for getting user default heath profile data that is 
     * method to return user age
     * method to return max heart rate
     * method to return body mass index (BMI)
     * 
     * @param orig
     */
    string getAge();
    string maxHeartRate();
    string targetHeartRate();
    string bodyMassIndex();
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

