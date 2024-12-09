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
	return value / 2;
}


	//											+++Start Main+++

int main() {

	int a = 7;
	float b = 5.0;
	double c = 3;

	cout << half(a);
	cout << endl;
	cout << half(b);
	cout << endl;
	cout << half(c);
	cout << endl;

	//											+++END MAIN+++

	cout << endl << endl;
	system("pause");
	return 0;

}
