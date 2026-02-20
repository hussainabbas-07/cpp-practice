// Day11 Pointers Basics.cpp : This file contains the 'main' function. Program execution begins and ends there.
// TASK: Print address and value of a variable using pointer.

#include <iostream>
using namespace std;

int main()
{
    int num = 9;
    int* a = &num;

    cout << "Address of num: " << &num << "\n";
    cout << "Address of num: " << a << "\n";
    cout << "Value of a: " << *a << "\n";

    return 0;
}

