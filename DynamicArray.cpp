#include "DynamicArray.h"
#include <iostream>

DynamicArray::DynamicArray()		// Constructor
{
	capacity = 10;
	used = 0;
	list = new int[capacity];
}

DynamicArray::~DynamicArray()		// Destructor
{
	delete[] list;					      // deallocate array list
	list = nullptr;					      // nullptr means "nothing"
}

void DynamicArray::add(int newValue)     // Add item to array
{
	if (used == capacity)
		expand();

	list[used] = newValue;				// array is 0 based, so this adds after the last item
	used++;
}

void DynamicArray::expand()         // Double the array size
{
	capacity *= 2;                    // Double the capacity
	int *newList = new int[capacity]; // Create new array with the new capacity

	for (int i = 0; i < used; i++)    // Copy from old array to new one
		newList[i] = list[i];

	delete[] list;              	    // Delete old array
	list = newList;                   // Point to the new array
}

void DynamicArray::remove(int value)  // Remove item from array
{
	int index = 0;
	while (index < used) 
	{
		if (list[index] == value)
		{
			for (int i = index; i < used - 1; i++)
				list[i] = list[i + 1];
			used--;
		}
		else
			index++;
	}
}

void DynamicArray::removeAt(int index)	// Remove item from given index
{
	if (index >= 0 && index < used)
	{
		for (int i = index; i < used - 1; i++)
			list[i] = list[i + 1];
		used--;
	}
}

int DynamicArray::get(int index) const		// Retrieve value from given index
{
	if (index >= 0 && index < used)
		return list[index];
	else
		return 0;
}

void DynamicArray::display()    // Display array contents
{
	for (int i = 0; i < used; i++)
		std::cout << list[i] << " ";

	std::cout << std::endl;
}
int DynamicArray::size() const  // Return the number of elements in array
{
	return used;
}

int DynamicArray::getCapacity() const
{
	return capacity;
}