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

