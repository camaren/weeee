//
// Created by Camaren on 4/23/17.
//

#include <iostream>
using namespace std;

#include "Inequalities.h"

int main()
{
    double d1, d2;
    cout << "Give the first number: ";
    cin >> d1;
    cout << "Give the second number ";
    cin >> d2;

    char c;
    cout << "Which function a) Max() or b) Min()? ";
    cin >> c;
    if (c == 'a')
    {
        cout << "Max value is: " << Max(d1, d2) << endl;
    }
    else
    {
        cout << "Min value is: " << Min(d1, d2) << endl;
    }
    double dA = 1.0; double dB = 2.0; double dC = 3.0;
    cout << "\n\nMax and min of three numbers: " << endl;
    cout << "Max value is: " << Max(dA, dB, dC) << endl;
    cout << "Min value is: " << Min(dA, dB, dC) << endl;

    return 0;
}