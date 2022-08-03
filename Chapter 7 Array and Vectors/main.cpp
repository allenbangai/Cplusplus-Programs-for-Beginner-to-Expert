#include "Chapter7Examples/ArrayExamples.h"
int main() {
    int choice;

    cout<<"Choose from the below options to select between the implemented chapter 7 exercises and examples \n"
          "Choose 1 for Bar Charts Example\n"<<endl;
    cin>>choice;
    switch (choice) {
        case 1:
            ArrayExamples().barChart();
            break;
        default:
            cout<<"Wrong choice"<<endl;
            break;
    }
    return 0;
}
