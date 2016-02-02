// CSCI40 HOMEWORK TWO
// 1/20/2016
// Thomas Asadurian

#include<iostream>
using namespace std;

int main() {

	// Write a program that informs the user that this is a payroll program.
	// Then asks for the user�s salary. After a user input his/her salary,
	// compute the raise, then prints out the current salary, the raise and
	// the new salary, with identifying labels.
	// If salary > $12,500 raise = 15.2%, If salary < $12,500 raise = 21.9%.

	int salaryNumber = 12500;
	double higherSalary = .152;
	double lowerSalary = .219;

	int salaryInput;
	cout << "This is a program that will calculate your raise based on your current salary. Please input your salary: " << endl;
	cin >> salaryInput;
	if (salaryInput > salaryNumber) {
		cout << "You are getting a 15.2% raise to: ";
		cout << (salaryInput * higherSalary) + salaryInput;
	}
	else if (salaryInput < salaryNumber && salaryInput > 0) {
		cout << "You are getting a 21.9% raise to: ";
		cout << (salaryInput * lowerSalary) + salaryInput;
	}
	else {
		cout << "That is not a valid Salary" << endl;
	}


	// Write a program that asks a user to enter two integers,
	// then only displays the larger number on the screen.

	int first, second;
	cout << "This program will find the larger number" << endl;
	cout << "Enter first integer: " << endl;
	cin >> first;
	cout << "Enter second integer: " << endl;
	cin >> second;
	if (first > second) {
		cout << first << endl;
	}
	else {
		cout << second << endl;
	}

	// Write a program that asks a user to enter a positive integer.
	// If the number that user enters is odd, displays the message
	// �Good Morning!�, otherwise, displays the message �Good Afternoon!�

	int userInteger;
	cout << "Enter your posetive integer" << endl;
	cin >> userInteger;
	if (userInteger % 2 = 0) {
			cout << "Good Morning!" << endl;
	}
	else {
		cout << "Good Afternoon" << endl;
	}

	// Write a program that calculates the area of a circle.
	// Your program should ask a user to enter the radius of a circle and check
	// if the user input is a positive number. If the number that user entered
	// is a positive number, then proceed to calculate and display the area of
	// the circle, otherwise, display the message “Invalid Input!
	// The radius of a circle can’t be a negative number!”

	double cRadius;
	cout << "To calculate the area of a circle input your radius: " << endl;
	cin >> cRadius;
	if (cRadius < 0) {
		cout << "Invalid Input! The radius of a circle can’t be a negative number!" << endl;
	}
	else {
		cout << 3.1415 * cRadius * cRadius << endl;
	}

	return 0;
}
