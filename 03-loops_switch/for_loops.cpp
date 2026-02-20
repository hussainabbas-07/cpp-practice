// for loop

#include <iostream>
using namespace std;

int main()
{
 // TASK: Print number 1 to 10 by using loops
 
 for (int i = 1; i <= 10; i++) {
 cout << i << "\n";
  }
 return 0;
}

// TASK: Print table of 9 by using for loop

#include <iostream>
using namespace std;

int main()
{
	int num;

	cout << " Enter a number to print its table: ";
	cin >> num;
	for (int a = 1; a <= 10; a++)

	{
		cout << num << " x " << a << " = " << num * a << " \n ";
	}
	return 0;
}

