/*
Name: Kyle Baker
Date: 12/08/2024
Project Name: CIS 1202 Programming Assignment #15b - Templates
Project Description: Write templated functions to perform math on varying numeric data types.
*/

// libraries
#include<cmath>
#include<iostream>

// namespace
using namespace std;

// templates
template <typename T>
T half(T value) {
	return value / 2.0;
}

template <>
int half<int>(int value) {
	return static_cast<int>(round(value / 2.0));
}

	//											+++Start Main+++

int main() {

	// declare variables 
	double 
		a1 = 7.0, 
		a2 = 12.0, 
		a3 = 9.6, 
		a4 = 2.2;

	float 
		b1 = 5.0f,
		b2 = 10.0f,
		b3 = 22.8f,
		b4 = 157.1f;

	int 
		c1 = 3,
		c2 = 23,
		c3 = 40,
		c4 = 13;

	cout << half(a1) << endl;
	cout << half(a2) << endl;
	cout << half(a3) << endl;
	cout << half(a4) << endl;
	cout << endl;
	cout << half(b1) << endl;
	cout << half(b2) << endl;
	cout << half(b3) << endl;
	cout << half(b4) << endl;
	cout << endl;
	cout << half(c1) << endl;
	cout << half(c2) << endl;
	cout << half(c3) << endl;
	cout << half(c4) << endl;


	//											+++END MAIN+++

	cout << endl << endl;
	system("pause");
	return 0;

}
