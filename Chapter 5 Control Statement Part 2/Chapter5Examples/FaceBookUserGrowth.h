/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   FaceBookUserGrowth.h
 * Author: DELL
 *
 * Created on February 5, 2022, 8:40 PM
 */

#ifndef FACEBOOKUSERGROWTH_H
#define FACEBOOKUSERGROWTH_H

class FaceBookUserGrowth {
public:
    FaceBookUserGrowth();
    FaceBookUserGrowth(const FaceBookUserGrowth& orig);
    
    FaceBookUserGrowth(long FValue);
    
    void SetFValue(long FValue);

    int GetNumOfMonths();
    
    virtual ~FaceBookUserGrowth();
private:
    const long PValue = 500000000;
    const double rate = 0.05;
    int numOfMonths;
    long FValue;

};

#endif /* FACEBOOKUSERGROWTH_H */

