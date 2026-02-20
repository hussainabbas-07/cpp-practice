//2D Arrays.cpp:
//Task: MatrixDisplay by using 2D-Arrays
#include <iostream>
using namespace std;

int main()
{
	int matrix[3][3], i, j;
	for (i=0; i<3; i++)
		for (j = 0; j<3; j++)
		{
			cout << "Enter an integer: ";
			cin >> matrix[i][j];
		}
	for (i = 0; i<3; i++)
	{
		for (j = 0; j < 3; j++)
			cout << matrix[i][j] << "\t";
		cout << "\n";
	}
	return 0;
}

