// Day10 Strings Basics.cpp : This file contains the 'main' function. Program execution begins and ends there.
// TASK: Take a full name as input and display character count.

#include <iostream>
using namespace std;

int main()
{
	char name[14];
	int count = 0;

	cout << "Enter your full name:";
	cin.getline(name, 14);

	for (int i = 0; name[i] != '\0'; i++) {
		count = count + 1;
	}

	cout << "Total characters: " << count << "\n";

	return 0;

}

