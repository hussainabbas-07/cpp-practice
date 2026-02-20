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