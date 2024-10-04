#pragma once

#include "list.h"

//------------------------------------------------------------
// Your practice problem declarations

// Prints the elements in the list to which p points.
void print(const Node *p);

// Returns a pointer to the node containing the given element.
// p points to the first node in the list.
// val is the element to find.
// Returns nullptr if val is not present in the list
Node *find(Node *p, int val);


// Removes val from the list to which p points.
// If val is not present, the function does not modify the list.
// Returns a pointer to the list to which p points (note that
// this can replace p if val is in the first node).
Node *remove(Node *p, int val);

// Inserts an element onto the end of the list.
Node *insert(Node *p, int val);

// Returns true if the elements of the list starting at the node 
// to which p points appear in non-descending order; otherwise, 
// returns false. p points to a node in the list.
bool is_ascending(const Node *p);


// Returns a pointer to the beginning of a linked list containing 
// the elements in a vector of integers. Returns nullptr if the 
// vector is empty
Node *from_vector(const std::vector<int>& vec);

// Deallocates all the nodes in a linked list starting at the node 
// to which p  points.
void dispose(Node *p);


// Prints the contents of the list in reverse order from the back
// upto the node to which p points.
void print_reverse(const Node *p);

// Sorts in non-decreasing order the contents of the list from 
// the node to which p points to the end.
void sort(Node *p);
