// Day8 Function Basics.cpp : This file contains the 'main' function. Program execution begins and ends there.
// TASK: Write function for sum.

/*#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int sum = a + b;
    return sum;
}

int main()
{
    cout << sum(12, 2);
}*/

// TASK: Write function for Factorial

/*#include <iostream>
using namespace std;

int factorialN(int n)
{
    int factorial = 1;
    
    for (int i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }
    return factorial;
}

int main()
{
    cout << factorialN(9);
}*/

// TASK: Prime check function.

/*#include <iostream>
using namespace std;

// Function to check if number is prime
bool isPrime(int n)
{
    if (n <= 1)
        return false; // 1 aur negative numbers prime nahi hote

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return false; // agar kisi se divide ho gaya, prime nahi
    }

    return true; // agar loop se nikal gaya, to prime hai
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPrime(num))
        cout << num << " is a Prime number";
    else
        cout << num << " is NOT a Prime number";

    return 0;
}*/

// TASK: Create a function that calculates the square of a number.

#include <iostream>
using namespace std;

int square(int num)
{
    return num * num;
}

int main()
{
    int number;
    cout << "Enter a Number: " << "\n";
    cin >> number;

    cout << "square of" << " " << number << " " << "is" <<":" << " " << square(number) << "\n";

    return 0;
}