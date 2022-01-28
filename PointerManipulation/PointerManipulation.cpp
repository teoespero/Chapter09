//  PointerManipulation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//  Teodulfo Espero
//  BS Cloud and Systems Administration
//  BS Software Development
//  Western Governors University

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main() {

	// create 2 int pointers 
	int
		*pointer01,
		*pointer02;

	// create a dynamic int var and have its address
	// stored into p1
	pointer01 = new int;

	// enter a value for p1
	cout << "enter a number.....";
	cin >> *pointer01;

	// set p2's value as the address of p1
	pointer02 = pointer01;

	// display the output for p1 and p2
	// they both show the same since
	// they are pointing to the same address
	cout << "*pointer01 = " << *pointer01 << endl;
	cout << "*pointer02 = " << *pointer02 << endl;

	// change the value of the address p2 (p1)
	// is pointing to
	cout << "enter a number.....";
	cin >> *pointer02;

	// display the output for p1 and p2
	// they both show the same since
	// they are pointing to the same address
	cout << "*pointer01 = " << *pointer01 << endl;
	cout << "*pointer02 = " << *pointer02 << endl;

	// add 3 to whatever value p1 and p2 holds
	*pointer01 += 3;

	// both p1 and p2 should still
	// show the same values
	cout << "*pointer01 = " << *pointer01 << endl;
	cout << "*pointer02 = " << *pointer02 << endl;

	// create a new dynamic int var
	// have its address stored in p1
	pointer01 = new int;

	// get a value for the adress pointed to 
	// by p1
	cout << "enter a number.....";
	cin >> *pointer01;

	// since p1 and p2 are now pointing 
	// at different addresses their values 
	// should no longer be shared or the same
	cout << "*pointer01 = " << *pointer01 << endl;
	cout << "*pointer02 = " << *pointer02 << endl;


}
