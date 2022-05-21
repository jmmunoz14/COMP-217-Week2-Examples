#include <iostream>
#include "Maximum.h"
using namespace std;

int main() {
	cout << "Input three integer values: ";

	int int1, int2, int3;

	cin >> int1 >> int2 >> int3;

	cout << "The maximum integer value is: "
		<< maximum(int1, int2, int3);

	cout << "\n\nInput three double values: ";
	double double1, double2, double3;
	cin >> double1 >> double2 >> double3;

	cout << "The maximum value is: "
		<< maximum(double1, double2, double3);

	cout << "\n\nInput three char values: ";
	char char1, char2, char3;
	cin >> char1 >> char2 >> char3;

	cout << "The maximum character value is: " << maximum(char1, char2, char3)<< endl;
}