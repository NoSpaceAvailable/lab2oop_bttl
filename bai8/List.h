#ifndef LIST_H
#define LIST_H

#include <iostream>
#include <vector>

class List {
private:
    double* array;         // Dynamic array to store list elements
    unsigned int size;     // Current size of the list

    void resizeArray(unsigned int newSize);  // Helper to resize the array

public:
    List();                // Constructor
    ~List();               // Destructor

    void add(double x);                  // Adds an element to the list
    bool removeFirst(double x);          // Removes the first occurrence of x
    int removeAll(double x);             // Removes all occurrences of x
    bool replace(int index, double y);   // Replaces element at index with y
    void printList() const;              // Prints the list
};

#endif
