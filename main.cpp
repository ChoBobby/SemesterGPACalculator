#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int numClasses;
	int loopCount;
	float classGrade1{};
	float classGrade2{};
	float classGrade3{};
	float classGrade4{};
	float classGrade5{};
	float classGrade6{};
	float avgGrade{};
	float gpa{};

	cout << "How many classes do you have?: " << endl;
	cin >> numClasses;

	if (numClasses > 0 && numClasses <= 6) {
		loopCount = 1;
		while (loopCount <= numClasses) {
			cout << "Enter Class " << loopCount << " Grade: " << endl;

			switch (loopCount) {
			case 1:
				cin >> classGrade1;
				break;
			case 2:
				cin >> classGrade2;
				break;
			case 3:
				cin >> classGrade3;
				break;
			case 4:
				cin >> classGrade4;
				break;
			case 5:
				cin >> classGrade5;
				break;
			case 6:
				cin >> classGrade6;
				break;
			}
			loopCount++;
		}
	}
	else {
		cout << endl << "Error: Only allowed between 1 - 6 classes." << endl;
	}

	if (numClasses > 0 && numClasses <= 6) {
		if (numClasses == 1) {
			avgGrade = classGrade1;
		}
		else if (numClasses == 2) {
			avgGrade = (classGrade1 + classGrade2) / numClasses;
		}
		else if (numClasses == 3) {
			avgGrade = (classGrade1 + classGrade2 + classGrade3) / numClasses;
		}
		else if (numClasses == 4) {
			avgGrade = (classGrade1 + classGrade2 + classGrade3 + classGrade4) / numClasses;
		}
		else if (numClasses == 5) {
			avgGrade = (classGrade1 + classGrade2 + classGrade3 + classGrade4 + classGrade5) / numClasses;
		}
		else {
			avgGrade = (classGrade1 + classGrade2 + classGrade3 + classGrade4 + classGrade5 + classGrade6) / numClasses;
		}

		if (avgGrade > 0 && avgGrade < 60) {
			gpa = 0.0;
		}
		else if (avgGrade > 0 && avgGrade < 67) {
			gpa = 1.0;
		}
		else if (avgGrade > 0 && avgGrade < 70) {
			gpa = 1.3;
		}
		else if (avgGrade > 0 && avgGrade < 73) {
			gpa = 1.7;
		}
		else if (avgGrade > 0 && avgGrade < 77) {
			gpa = 2.0;
		}
		else if (avgGrade > 0 && avgGrade < 80) {
			gpa = 2.3;
		}
		else if (avgGrade > 0 && avgGrade < 84) {
			gpa = 2.7;
		}
		else if (avgGrade > 0 && avgGrade < 87) {
			gpa = 3.0;
		}
		else if (avgGrade > 0 && avgGrade < 90) {
			gpa = 3.3;
		}
		else if (avgGrade > 0 && avgGrade < 93) {
			gpa = 3.7;
		}
		else if (avgGrade > 0 && avgGrade <= 100) {
			gpa = 4.0;
		}
		else if (avgGrade > 0 && avgGrade > 100) {
			gpa = 4.0;
		}
		else {
			cout << endl << "Error: Grade Point Average below 0.0." << endl;
		}

		if (avgGrade >= 0 && gpa >= 0) {
			cout << endl << "Average Grade: " << fixed << setprecision(2) << avgGrade << "%" << endl;
			cout << "Semester GPA: " << gpa << endl;
		}
		else {
		}
	}

	return 0;
}