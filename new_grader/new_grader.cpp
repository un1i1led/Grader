// new_grader.cpp : Program that can calculate your grade.
//

#include <iostream>
using namespace std;

int main()
{
	int numOfGrades, counter = 0;
	double total = 0, weight, grade, calc, sum = 0, divSum = 0;

	cout << "Number of grades: "; cin >> numOfGrades;
	if (numOfGrades > 0) {
		for (int i = 0; i < numOfGrades; i++) {
			cout << "Weight of grade: "; cin >> weight;
			cout << "Grade: "; cin >> grade;
			divSum += weight;
			calc = weight * grade;
			sum += calc;
			total = sum / divSum;

		}
	}
	cout << endl << "Final grade: " << total << endl;
	system("pause");
}

