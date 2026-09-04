// CGT215-Lab02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;


int main()
{
    float A;
    float B;
    float X;

    cout << "Hello, my name is Grant and I can solve the following equation:" << endl;
    
    cout << "Ax + B = 0" << endl;
    
    cout << "for x" << endl;
    

    cout << "Please enter a value for A: ";
    cin >> A;

    cout << "Please enter a value for B: ";
    cin >> B;

    cout << "Solving" << A << "x + " << B << " = 0" << endl;

    cout << "The answer is x = " << (-B / A) << endl;

};
