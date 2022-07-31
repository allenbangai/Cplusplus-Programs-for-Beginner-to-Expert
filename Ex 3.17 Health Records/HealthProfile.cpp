/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   HealthProfile.cpp
 * Author: DELL
 * 
 * Created on December 6, 2021, 12:45 PM
 */

#include "HealthProfile.h"

HealthProfile::HealthProfile() {
}

HealthProfile::HealthProfile(string firstName, string secondName, string gender, 
        string dateOfBirth, float height, float weight){
    SetFirstName(firstName);
    SetSecondName(secondName);
    SetGender(gender);
    SetDateOfBirth(dateOfBirth);
    SetHeight(height);
    SetWeight(weight);    
}

HealthProfile::SetFirstName(string firstName){
    this->firstName = firstName;
}

HealthProfile::SetSecondName(string secondName){
    this->secondName = secondName;
}

HealthProfile::SetDateOfBirth(string dateOfBirth){
    this->dateOfBirth = dateOfBirth;
}

HealthProfile::SetGender(string gender){
    this->gender = gender;
}

HealthProfile::SetHeight(float height){
    this->height = height;
}

HealthProfile::SetWeight(float weight){
    this->weight = weight;
}

HealthProfile::SetYearOfBirth(int yearOfBirth){
    this->yearOfBirth = yearOfBirth;
}

HealthProfile::GetFirstName(){
    return firstName;
}

HealthProfile::GetSecondName(){
    return this->secondName;
}

HealthProfile::GetGender(){
    return gender;
}

HealthProfile::GetDateOfBirth(){
    return dateOfBirth;
}

HealthProfile::GetYearOfBirth(){
    return yearOfBirth;
}

HealthProfile::GetWeight(){
    return weight;
}

HealthProfile::GetHeight(){
    return height;
}

HealthProfile::getAge(){
    return 2021 - yearOfBirth;
}

HealthProfile::getBodyMassIndex(){
    return to_string(GetWeight() / GetHeight()*GetHeight());
}

HealthProfile::getMaxHeartRate(){
    return 220 - getAge();
}

HealthProfile::getTargetHeartRate(){
    return to_string(0.65*getMaxHeartRate());
}

HealthProfile::~HealthProfile() {
}

