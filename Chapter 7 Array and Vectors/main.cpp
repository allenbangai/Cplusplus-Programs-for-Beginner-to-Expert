#include "Chapter7Examples/ArrayExamples.h"
int main() {
    int choice;

    cout<<"Choose from the below options to select between the implemented chapter 7 exercises and examples \n"
          "Choose 1 for Bar Charts Example\n"
          "Choose 2 for die frequency example\n"
          "Choose 3 for student response frequency\n"
          "Choose 4 for "<<endl;
    cin>>choice;
    switch (choice) {
        case 1:
            ArrayExamples().barChart();
            break;
        case 2:
            ArrayExamples().dieFrequency();
            break;
        case 3:
            ArrayExamples().responseFrequency();
            break;
        case 4:
            ArrayExamples().static_automaticArrays();
        default:
            cout<<"Wrong choice"<<endl;
            break;
    }
    return 0;
}
