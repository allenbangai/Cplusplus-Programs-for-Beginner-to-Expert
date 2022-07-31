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
    cout<<"Not that if u fail the answer for the questions in the first trial, it will be counted as a failed answer, despite passing it the end"<<endl;
    while (constVal != 0){
        init = 0;
        val1 = rand()%9 + 1;
        val2 = rand()%9 + 1;
        auto answer = 9;
        do{
            cout<<"How much is "<<val1<<" times "<<val2<<"? ";
            cin>>answer;
            cout<<endl;
            response(productCheck(answer));
            init++;
        } while (!productCheck(answer));
        count++;
        if(count == 10){
            constVal = 0;
            double percentage = (countPass/count) * 100;
            if(percentage < 70){
                cout<<"You scored a "<<percentage<<"\nPlease ask your teacher for extra help."<<endl;
            }else{
                cout<<"You scored a "<<percentage<<"\nCongratulations, you are ready to go to the next level!"<<endl;
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
        if(init == 0){
            countFail++;
        }
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
