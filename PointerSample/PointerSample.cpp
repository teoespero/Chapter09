//  PointerSample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//  Teodulfo Espero
//  BS Cloud and Systems Administration
//  BS Software Development
//  Western Governors University

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main(){

	int mynumber = 0,
		*mypointer = &mynumber;

	cout << "enter a number... ";
	cin >> mynumber;

	cout << "mynumber...." << mynumber << endl;
	cout << "*mypointer....." << *mypointer << endl;

	cout << endl << "enter a new value for *mypointer.....";
	cin >> *mypointer;

	cout << endl << "new values" << endl;
	cout << "mynumber...." << mynumber << endl;
	cout << "*mypointer....." << *mypointer << endl;

	cout << endl << "the address of mynumber....." << &mynumber << endl;
	cout << "the address of *mypointer....." << mypointer << endl;
}