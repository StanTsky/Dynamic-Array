#pragma once

class DynamicArray
{
public:
	DynamicArray();    // Constructor
	~DynamicArray();   // Destructor
	void add(int);     // Add item to array
	void expand();     // Double the array size
	void remove(int);  // Remove item from array
	void removeAt(int);// Remove item from given index
	int get(int) const;// Retrieve value from given index
	void display();    // Display array contents
	int size() const;  // Return the number of elements in array
	int getCapacity() const;

private:
	int capacity;      // Total number of things array can hold
	int *list;         // Pointer to array
	int used;          // # of used spaces
};
