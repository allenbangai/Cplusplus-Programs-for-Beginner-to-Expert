/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   FaceBookUserGrowth.cpp
 * Author: DELL
 * 
 * Created on February 5, 2022, 8:40 PM
 */

#include "FaceBookUserGrowth.h"

FaceBookUserGrowth::FaceBookUserGrowth() {
}

FaceBookUserGrowth::FaceBookUserGrowth(long FValue){
    SetFValue(FValue);
}

void FaceBookUserGrowth::SetFValue(long FValue){
    this->FValue = FValue;
}

int FaceBookUserGrowth::GetNumOfMonths(){
    
    return this->numOfMonths;
}

FaceBookUserGrowth::FaceBookUserGrowth(const FaceBookUserGrowth& orig) {
}

FaceBookUserGrowth::~FaceBookUserGrowth() {
}

