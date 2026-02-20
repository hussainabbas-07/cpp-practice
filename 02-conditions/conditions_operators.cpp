// Day 4 logical opr & if-else.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int age;
	cout << "Enter your age";
	cin >> age;

	if (age <= 25)
		cout << "Young";

	else
		cout << "Adult";
}



int main()
{
	int ProjectMarks;
	float GPA;
	cout << "Enter ProjectMarks";
	cin >> ProjectMarks;

	cout << "Enter GPA: ";
	cin >> GPA;

	cout << "ProjectMarks:" << ProjectMarks << "\nGPA:" << GPA << "\n";
	
	if (ProjectMarks >= 8 && GPA <= 3.8)
		cout << "student is eligible to study in foreign uni on fully funded scholarship";

	else
		cout << "student is not eligible to study in foreign uni on fully funded scholarship";


	if (ProjectMarks >= 8 or GPA <= 3.8)
		cout << "student is eligible to study in foreign uni on his own expenses";

	else
		cout << "student is not eligible to study in foreign uni";
}


#include <iostream>
using namespace std;

int main() {
	bool fullyfundedscholarship;

	cout << "Enter 1 if you get fullyfundedscholarship, 0 if you dont get fullyfundedscholarship: ";
	cin >> fullyfundedscholarship;

	cout << "fullyfundedscholarship status (as entered): " << fullyfundedscholarship << endl;
	cout << "After pressing NOT switch: " << !fullyfundedscholarship << endl;

	return 0;
}


