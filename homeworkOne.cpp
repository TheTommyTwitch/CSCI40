// CSCI40 HOMEWORK ONE
// 1/16/2016
// Thomas Asadurian

#include<iostream>
using namespace std;

int main()
{
	//calculate the volume of a cylinder.
	//Formula: volume of a cylinder = radius * radius * 3.14159 * height

	double cylinderRadius, cylinderHeight;
	const double PI = 3.14159;

	cout << "This will calulate the area of a cylinder" << endl;
	cout << "Input you cylinder radius: " << endl;
	cin >> cylinderRadius;
	cout << "Input the cylinder height: " << endl;
	cin >> cylinderHeight;
	cout << cylinderRadius * cylinderRadius * PI * cylinderHeight << endl;


	//calculate the area of a triangle.
	//Formula: 0.5 * base * height

	double triangleBase, triangleHeight;

	cout << "This will calculate the area of a triangle" << endl;
	cout << "Input your triangle base: " << endl;
	cin >> triangleBase;
	cout << "Input your triangle height: " << endl;
	cin >> triangleHeight;
	cout << 0.5 * triangleBase * triangleHeight << endl;


	//convert the temperature from Celsius to Fahrenheit.
	//Formula F = (9/5)C + 32

	double celcius;

	cout << "This will convert celcius to fahrenheit" << endl;
	cout << "Input the temperature in celcius: " << endl;
	cin >> celcius;
	cout << (9.0 / 5.0) * celcius + 32 << endl;


	//calculate the cost according to the number of items manufactured x
	//Formula C = 215,000 + 15x + 8x^2

	double x;
	cout << "This will calculate the cost according to the number of item manufactured" << endl;
	cout << "Input the number of items: " << endl;
	cin >> x;
	cout << 215000 + (15 * x) * (8 * x * x) << endl;


	return 0;
}
