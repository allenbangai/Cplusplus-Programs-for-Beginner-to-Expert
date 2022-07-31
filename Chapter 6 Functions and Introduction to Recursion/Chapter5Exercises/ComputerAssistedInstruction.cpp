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
    while (constVal != 0){
        srand(time(0));
        val1 = rand()%9 + 1;
        val2 = rand()%9 + 1;
        auto answer = 9;
        do{
            cout<<"How much is "<<val1<<" times "<<val2<<"? ";
            cin>>answer;
            cout<<endl;
            if(productCheck(answer)){
                cout<<"Very Good, take another exercise"<<endl;
            }else{
                cout<<"No. Please try again"<<endl;
            }

        } while (!productCheck(answer));
        cout<<"enter 0 to stop and 1 to continue: ";
        cin>>constVal;
        cout<<endl;
    }

}

bool ComputerAssistedInstruction::productCheck(int val) {
    if(val == getVal1() * getVal2()){
        return true;
    }else{
        return false;
    }
}
