// Day12 Structures.cpp : This file contains the 'main' function. Program execution begins and ends there.
// TASK: Create structure student and Store marks in struct.

#include <iostream>
using namespace std;

struct student
{
	int MarksinMath;
	int MarksinPhysics;
	int MarksinChemistry;
};



int main()
{
	struct student Hussain;
	Hussain.MarksinMath = 68;
	Hussain.MarksinPhysics = 92;
	Hussain.MarksinChemistry = 85;

	int totalmarks = 300;
	int obtmarks = Hussain.MarksinMath + Hussain.MarksinPhysics + Hussain.MarksinChemistry;

	float percentage = (obtmarks / (float)totalmarks) * 100;
	cout << "percentage :" << percentage << "%";
}

