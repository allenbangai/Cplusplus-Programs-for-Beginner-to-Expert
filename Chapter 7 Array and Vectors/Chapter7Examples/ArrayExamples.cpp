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
}

void ArrayExamples::dieFrequency() {
}
// end barChart
