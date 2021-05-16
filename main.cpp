/*
--------------------------------------------------------------------
* Name:       Stan Turovsky
* Class:      Advanced C++
* Files:      main.cpp, DynamicArray.cpp, DynamicArray.h
* Purpose:    Demo of the DynamicArray class
--------------------------------------------------------------------
*/
#include <iostream>       // Preprocessor directives
#include <ctime>
#include "DynamicArray.h"
using namespace std;

int main()                // main function
{
	DynamicArray list;
	srand(time(0));					// srand seeds; time(0) seeds with current time

	for (int i = 0; i < 100; i++)
	{
		int r = 1 + rand() % 1000;	// from 1 to 1000
		list.add(r);
		cout << "size: " << list.size();
		cout << "\tcapacity: " << list.getCapacity() << endl;
	}
	list.display();
	
	cout << endl;           // Leave this stuff at the end
	// system("pause");
	return 0;
}