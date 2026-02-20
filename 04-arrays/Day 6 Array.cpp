// Array.cpp: 
// Task: Store marks of 5 students in an array and display them by using for loop
#include <iostream>
using namespace std;

int main()
{
    int marksofstudents[5] = { 88, 56, 91, 70, 38 };

    for (int a = 0; a < 5; a++)
    {
        cout << " marks of student " << a << " = " <<  marksofstudents[a] << "\n";
    }
    return 0;
}
    

// Task: Store marks of 5 students in an array and display them by using while loop
#include <iostream>
using namespace std;

int main()
{
    int marksofstudents[5] = { 88, 56, 91, 70, 38 };

    int a = 0;

    while (a < 5)
    {
        cout << " marks of student " << a << " = " << marksofstudents[a] << "\n";
        a++;
    }
    return 0;
}



// TASK: Calculate average marks (1D ARRAY)
#include <iostream>
using namespace std;

int main()
{
    int n;                  // number of subjects
    float marks[100];       // array to store marks
    float sum = 0;          // variable to store total marks
    float average;          // variable to store average

    cout << "Enter number of subjects: ";
    cin >> n;               // input number of subjects

    if (n <= 0 || n > 100)
    {
        cout << "Invalid number of subjects!" << endl;
        return 0;           // stop program if invalid input
    }

    // input marks and find sum
    for (int i = 0; i < n; i++)
    {
        cout << "Enter marks for subject " << i + 1 << ": ";
        cin >> marks[i];
        sum = sum + marks[i];
    }

    // calculate average
    average = sum / n;

    // display result
    cout << "Average Marks = " << average << endl;

    return 0;
}

  