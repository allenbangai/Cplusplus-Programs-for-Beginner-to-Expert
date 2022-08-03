//
// Created by Allen on 03/08/2022.
//

#include "ArrayExamples.h"

ArrayExamples::ArrayExamples() {

}

void ArrayExamples::barChart() {
    const int arraySize = 11;
    int n[ arraySize ] = { 0, 0, 0, 0, 0, 0, 1, 2, 4, 2, 1 };

    cout << "Grade distribution:" << endl;

    // for each element of array n, output a bar of the chart
    for ( int i = 0; i < arraySize; ++i ){
        // output bar labels ("0-9:", ..., "90-99:", "100:" )
        if(i == 0){
            cout << " 0-9: ";
        }else if(i == 10){
            cout <<"  100: ";
        }else{
            cout << i * 10 << "-" << ( i * 10 ) + 9 << ": ";
        }

        // print bar of asterisks
        for ( int stars = 0; stars < n[ i ]; ++stars ){
            cout << '*';
        }
        cout << endl;
    }
}// end barChart

void ArrayExamples::dieFrequency() {
    const int arraySize = 6;
    int frequency[ arraySize ] = {}, rollNum; // initialize elements to 0

    srand( time( 0 ) ); // seed random number generator

    cout<<"Enter number of roll you want the die to perform, not that it cannot be less than 6 and must be a multiple \n"
          "of 6 else it will be brought to the closest greatest multiple of 6"<<endl;
    cin>>rollNum;
    while(rollNum % 6 != 0){
        rollNum++;
    }

    // roll die 6,000,000 times; use die value as frequency index
    for ( int roll = 1; roll <= rollNum; ++roll ){
        ++frequency[ rand() % 6 ];
    }

    cout << "Face" << setw( 13 ) << "Frequency" << endl;
    // output each array element's value
    for ( int face = 0; face < arraySize; ++face ){
        cout << setw( 4 ) << face + 1 << setw( 13 ) << frequency[ face ]<<endl;
    }
}

void ArrayExamples::responseFrequency() {

}
// end dieFrequency

