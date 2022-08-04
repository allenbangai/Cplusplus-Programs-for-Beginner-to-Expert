//
// Created by Allen on 03/08/2022.
//
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

#ifndef CHAPTER_7_ARRAY_AND_VECTORS_ARRAYEXAMPLES_H
#define CHAPTER_7_ARRAY_AND_VECTORS_ARRAYEXAMPLES_H

class ArrayExamples {
private:

public:
    ArrayExamples();

    void barChart();

    void dieFrequency();

    /**
     * Twenty students were asked to rate on a scale of 1 to 5 the quality of the food in the
     * student cafeteria, with 1 being “awful” and 5 being “excellent.” Place the 20 responses
     * in an integer array and determine the frequency of each rating.
     */
    void responseFrequency();

    void static_automaticArrays();

};// std

#endif //CHAPTER_7_ARRAY_AND_VECTORS_ARRAYEXAMPLES_H
