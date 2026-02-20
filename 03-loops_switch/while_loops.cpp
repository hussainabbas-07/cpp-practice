// While loop

#include <iostream>
using namespace std;

int main()
{
	// Printing numbers 1 to 10 by using while loop

	int i = 1;
	while (i <= 10) {
		cout << i << "\n";
		i++;
	}
	return 0;
}

// print table by using while loop
#include <iostream>
using namespace std;

int main()
{
	int num, a = 1;

	cout << " Enter a number to print its table: ";
	cin >> num;
	while (a <= 10)

	{
		cout << num << " x " << a << " = " << num * a << " \n ";
		a++;
	}
	return 0;
}

#include <iostream>
using namespace std;

int main()
{
	int num;

	cout << "Enter numbers (enter 0 to stop): " << "\n";

	while (true)
	{
		cin >> num;

		if (num == 0) {
			break;
		}

		cout << "You entered: " << num << "\n";
	}

	cout << "Program stopped because you entered 0." << "\n";

	return 0;
}