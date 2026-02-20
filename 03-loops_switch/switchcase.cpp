// switch case

// Display days using switch case
#include <iostream>
using namespace std;

int main()
{
	int day;
	cout << "Enter any number from 1 to 7";
	cin >> day;
	switch (day)
	{
	case 1:
		cout << "Sunday";
		break;

	case 2:
		cout << "Monday";
		break;

	case 3:
		cout << "Tuesday";
		break;

	case 4:
		cout << "Wednesday";
		break;

	case 5:
		cout << "Thursday";
		break;

	case 6:
		cout << "Friday";
		break;

	case 7:
		cout << "Saturday";
		break;

	default:
		cout << "wrong input";

	}
	return 0;

}


// TASK: Create a menu using switch (Mon–Sun printing day of week)
#include <iostream>
using namespace std;

int main() {
	int choice;

	cout << "====== Days of the Week Menu ======" << endl;
	cout << "1. Sunday" << endl;
	cout << "2. Monday" << endl;
	cout << "3. Tuesday" << endl;
	cout << "4. Wednesday" << endl;
	cout << "5. Thursday" << endl;
	cout << "6. Friday" << endl;
	cout << "7. Saturday" << endl;
	cout << "===================================" << endl;

	cout << "Enter your choice (1–7): ";
	cin >> choice;

	switch (choice) {
	case 1: cout << "You selected Sunday" << endl; break;
	case 2: cout << "You selected Monday" << endl; break;
	case 3: cout << "You selected Tuesday" << endl; break;
	case 4: cout << "You selected Wednesday" << endl; break;
	case 5: cout << "You selected Thursday" << endl; break;
	case 6: cout << "You selected Friday" << endl; break;
	case 7: cout << "You selected Saturday" << endl; break;
	default: cout << "Invalid input! Please enter a number between 1 and 7." << endl;
	}

	return 0;
}


// TASK: Make menu-driven calculator
#include <iostream>
using namespace std;

int main() {
	int choice;
	double num1, num2;

	while (true) {
		cout << "\n====== Simple Calculator ======\n";
		cout << "1. Addition\n";
		cout << "2. Subtraction\n";
		cout << "3. Multiplication\n";
		cout << "4. Division\n";
		cout << "5. Exit\n";
		cout << "==============================\n";
		cout << "Enter your choice (1-5): ";
		cin >> choice;

		// agar user exit choose kare
		if (choice == 5) {
			cout << "Exiting program... Goodbye!\n";
			break;
		}

		// sirf tab poochein jab choice 1-4 ke beech ho
		cout << "Enter first number: ";
		cin >> num1;
		cout << "Enter second number: ";
		cin >> num2;

		switch (choice) {
		case 1:
			cout << "Result: " << num1 + num2 << endl;
			break;
		case 2:
			cout << "Result: " << num1 - num2 << endl;
			break;
		case 3:
			cout << "Result: " << num1 * num2 << endl;
			break;
		case 4:
			if (num2 != 0)
				cout << "Result: " << num1 / num2 << endl;
			else
				cout << "Error: Division by zero is not allowed!" << endl;
			break;
		default:
			cout << "Invalid choice! Please select 1–5." << endl;
		}
	}

	return 0;
}