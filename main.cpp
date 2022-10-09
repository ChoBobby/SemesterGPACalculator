#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int numClasses;
	int totCreds = 0;
	float totGps = 0;
	float gpa;

	cout << " ------------------------------------------------- " << endl;
	cout << "|     Welcome to my Semester GPA Calculator!      |" << endl;
	cout << "|  Updated to calculate credit hours now aswell!  |" << endl;
	cout << " ------------------------------------------------- " << endl;

	cout << endl << "Classes this Semester (Up to 6): ";
	cin >> numClasses;

	if (numClasses <= 6 && numClasses > 0) {
		int grade[7] = {};
		int cred[7] = {};
		float gp;
		float gps[7] = {};

		for (int i = 1; i <= numClasses; ++i) {
			cout << endl << "Class " << i << " - " << endl;
			cout << "Grade Percentage: ";
			cin >> grade[i];
			cout << "Credit Hours: ";
			cin >> cred[i];
			totCreds += cred[i];

			if (grade[i] >= 93) {
				gp = 4.0;
			}
			else if (grade[i] >= 90) {
				gp = 3.7;
			}
			else if (grade[i] >= 87) {
				gp = 3.3;
			}
			else if (grade[i] >= 83) {
				gp = 3.0;
			}
			else if (grade[i] >= 80) {
				gp = 2.7;
			}
			else if (grade[i] >= 77) {
				gp = 2.3;
			}
			else if (grade[i] >= 73) {
				gp = 2.0;
			}
			else if (grade[i] >= 70) {
				gp = 1.7;
			}
			else if (grade[i] >= 67) {
				gp = 1.3;
			}
			else if (grade[i] >= 63) {
				gp = 1.0;
			}
			else if (grade[i] >= 60) {
				gp = 0.7;
			}
			else {
				gp = 0.0;
			}

			gps[i] = gp * cred[i];
			cout << "Grade Points: " << gps[i] << endl;

			totGps += gps[i];
		}

		gpa = totGps / totCreds;
		cout << endl << "--------------------------------------------------" << endl;
		cout << endl << "SEMESTER GPA: " << fixed << setprecision(2) << gpa << endl;
		cout << "TOTAL CREDIT HOURS: " << totCreds << endl;
	}
	else {
		cout << endl << "Error: Maximum of 1 - 6 classes allowed." << endl;
	}
	return 0;
}
