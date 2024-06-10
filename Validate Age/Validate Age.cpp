
										/* Program to validate Age --> example between 18 and 45 */

#include <iostream>
#include <cmath>
using namespace std;

int main()

{
 
	int Age;
	cout << "Please enter your age !" << endl;
	cin >> Age;

	
	if (Age >= 18 && Age <= 45) {

		cout << "The age is valid " << endl;

	}

	else {

		cout << "The age is invalid " << endl;
	}



	return 0;

	// Created by @ilyes_Trabelsi 
}

