//  DynamicArrays.cpp : this is mainly to illustrate how dynamic arrays are created in c++.
//  Teodulfo Espero
//  BS Cloud and Systems Administration
//  BS Software Development
//  Western Governors University

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main() {

	// the whole idea is to create a program that
	// allows you to creeate a dynamic array
	// an array that grows depending on how
	// many indices the program needs
	typedef int* IntArrayPtr;

	// placeholder for the array size
	int arraysize;

	// first size of the array
	cout << "how big should the array be.....";
	cin >> arraysize;

	// create the pointer for our array
	IntArrayPtr myarray;

	// create the array based on the size 
	// entered by the user
	myarray = new int[arraysize];

	// put values into the array
	cout << "enter " << arraysize << " values for the array....." << endl;
	for (int ctr1 = 0; ctr1 < arraysize; ctr1++) {
		cin >> myarray[ctr1];
	}

	// show the contents of our first array
	cout << endl;
	cout << "the values you entered are....." << endl;

	for (int ctr2 = 0; ctr2 < arraysize; ctr2++) {
		cout << myarray[ctr2] << endl;
	}
	
	// destroy the var so we can reclaim 
	// the memory that it was using
	cout << "destroying the array..." << endl;
	delete[] myarray;

	// create a new array with the same name
	cout << endl << "create a new array....." << endl;
	cout << "how big should the array be.....";
	cin >> arraysize;

	// create the new array based on the 
	// new size needed
	myarray = new int[arraysize];

	// put new values into our
	// new array
	cout << "enter " << arraysize << " values for the array....." << endl;
	for (int ctr3 = 0; ctr3 < arraysize; ctr3++) {
		cin >> myarray[ctr3];
	}

	// display the values of the
	// array
	cout << endl;
	cout << "the values you entered are....." << endl;

	for (int ctr4 = 0; ctr4 < arraysize; ctr4++) {
		cout << myarray[ctr4] << endl;
	}

	// destroy the array
	// on destroying our array we got the
	// warning C6283: <variable> is allocated with array new [], 
	// but deleted with scalar delete

	//To correct this warning, use the following code :
	//	void f()
	//	{
	//		char* str = new char[50];
	//		delete[] str;
	//	}
	cout << "destroying the array..." << endl;
	delete[] myarray;


}