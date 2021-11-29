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
    string firstName, secondName, dateOfBirth;
    int dayOfBirth, monthOfBirth, yearOfBirth, presentYear;
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
    
    dateOfBirth = to_string(dayOfBirth)+ "/"+to_string(monthOfBirth)+"/"+to_string(yearOfBirth);
    
    HeartRates heartrate(firstName, secondName, dateOfBirth, presentYear);
    heartrate.setYearOfBirth(yearOfBirth);
    
    cout<<"Hello Mr "+heartrate.getName()<<endl;
    cout<<"You are born on the "+ heartrate.getDateOfBirth()<<endl;
    cout<<"With a max heart rate of "+ to_string(heartrate.getMaximumHeartRate()) +"bpm ";
    cout<<"and target heart rate of "+ heartrate.getTargetHeartRate()+ "bpm"<<endl;
    
    return 0;
}