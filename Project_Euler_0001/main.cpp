/*
    Project Euler - Problem 1
    Written by: Blake Bartlett

    File Name: main.cpp
*/

#include <iostream>

using namespace std;

int main()
{
    cout << "Project Euler - Problem 1" << endl;
    cout << "Calculating sum of natural numbers divisible by 3 or 5, under 1000" << endl;

    int intUbound = 1000;
    int intAnswer = 0;

    for (int intIterator = 0;intIterator < intUbound; intIterator++) {
        if ((intIterator % 3 == 0) || (intIterator % 5 == 0)) {
            intAnswer = intAnswer + intIterator;
        }
    }

    cout << "The answer is: " << intAnswer << endl;
    return 0;
}
