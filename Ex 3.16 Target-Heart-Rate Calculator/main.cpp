/* 
 * File:   main.cpp
 * Author: DELL
 *
 * Created on March 15, 2021, 1:00 AM
 */

#include "HeartRates.h"
#include <cstdlib>

using namespace std;

/*
 * 
 */
int main(int arg, char** argv) {
    //declaration of useful variables
    string firstName, secondName, dateOfBirth;
    int dayOfBirth, monthOfBirth, yearOfBirth, presentYear;
    
    //getting useful information form the user
    cout<<"Please enter your first name: ";
    cin>>firstName;
    cout<<endl;
    
    cout<<"Please enter your second name: ";
    cin>>secondName;
    cout<<endl;
    
    cout<<"Enter your day of birth: ";
    cin>>dayOfBirth;
    cout<<endl;
    
    cout<<"Enter your month of birth: ";
    cin>>monthOfBirth;
    cout<<endl;
    
    cout<<"Enter your year of birth: ";
    cin>>yearOfBirth;
    cout<<endl;
    
    cout<<"Enter the present year: ";
    cin>>presentYear;
    cout<<endl;
    
    //concat string to get date of birth of user from information proving
    dateOfBirth = to_string(dayOfBirth)+ "/"+to_string(monthOfBirth)+"/"+to_string(yearOfBirth);
    
    //instating object of class HeartRates and implementing some setter methods
    HeartRates heartrate(firstName, secondName, dateOfBirth, presentYear);
    heartrate.setYearOfBirth(yearOfBirth);
    
    //...introducing user and getting user max and target heart rate...
    //...printing output on the console...
    cout<<"Hello Mr "+heartrate.getName()<<endl;
    cout<<"You are born on the "+ heartrate.getDateOfBirth()<<endl;
    cout<<"With a max heart rate of "+ to_string(heartrate.getMaximumHeartRate()) +"bpm ";
    cout<<"and target heart rate of "+ heartrate.getTargetHeartRate()+ "bpm"<<endl;
    
    return 0;
}