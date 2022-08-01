//
// Created by Allen on 30/07/2022.
//

#include "ComputerAssistedInstruction.h"

auto ComputerAssistedInstruction::getVal1() const {
    return val1;
}

auto ComputerAssistedInstruction::getVal2() const {
    return val2;
}

void ComputerAssistedInstruction::start() {
    cout<<"Note that if u fail the answer for the questions in the first trial, it will be counted as a failed answer, \ndespite passing it the end."<<endl;
    cout<<"Choose between difficulty 1, 2 and 3"<<endl;
    cin>>constVal;
    setDifficulty(constVal);
    while (constVal != 0){
        init = 0;
        val1 = rand()%endRand + startRand;
        val2 = rand()%endRand + startRand;
        auto answer = 9;
        do{
            cout<<"How much is "<<val1<<" times "<<val2<<"? "<<endl;
            cin>>answer;
            response(productCheck(answer));
            init++;
        } while (!productCheck(answer));
        count++;
        if(count >= 10){
            constVal = 0;
            float percentage = (float )((countPass/count) * 100);
            count = 0;
            countPass = 0;
            if(percentage < 70){
                cout<<"You scored a "<<percentage<<"%\nPlease ask your teacher for extra help."<<endl;
                cout<<"If u want to try again, chose difficulty between 1, 2, and 3 or chose 0 to end program."<<endl;
                cin>>constVal;
                setDifficulty(constVal);
            }else if(percentage >= 70 && constVal != 3){
                cout<<"You scored a "<<percentage<<"%\nCongratulations, you are ready to go to the next level."<<endl;
                cout<<"To go to the next level, chose difficulty between 1, 2, and 3 or chose 0 to end program."<<endl;
                cin>>constVal;
                setDifficulty(constVal);
            }else{
                cout<<"You scored a "<<percentage<<"%\nCongratulations, you are now an expert in arithmetic operation."<<endl;
            }
        }
    }
}

bool ComputerAssistedInstruction::productCheck(int val) {
    if(val == getVal1() * getVal2()){
        return true;
    }else{
        return false;
    }
}

ComputerAssistedInstruction::ComputerAssistedInstruction() {

}

void ComputerAssistedInstruction::response(bool val) {
    auto var1 = rand()%4 + 1;
    if(val){
        if(init == 0){
            countPass++;
        }
        switch (var1) {
            case 1:
                cout<<"Very good!\n"<<endl;
                break;
            case 2:
                cout<<"Excellent!\n"<<endl;
                break;
            case 3:
                cout<<"Nice work!\n"<<endl;
                break;
            case 4:
                cout<<"Keep up the good work!\n"<<endl;
                break;
        }
    }else{
        switch (var1) {
            case 1:
                cout<<"No. Please try again.\n"<<endl;
                break;
            case 2:
                cout<<"Wrong. Try once more.\n"<<endl;
                break;
            case 3:
                cout<<"Don't give up!\n"<<endl;
                break;
            case 4:
                cout<<"No. Keep trying.\n"<<endl;
                break;
        }
    }
}

void ComputerAssistedInstruction::setDifficulty(int val = 1) {
    switch (val) {
        case 1:
            startRand = 1;
            endRand = 9;
            break;
        case 2:
            startRand = 10;
            endRand = 50;
            break;
        case 3:
            startRand = 51;
            endRand = 101;
            break;
    }
}
