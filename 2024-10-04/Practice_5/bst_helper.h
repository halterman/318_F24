#include <iostream>

#include "node.h"


// Inserts element elem into the binary search tree
// rooted at t if it is not already present. Returns 
// the potentially new root of the tree.
Node *insert(Node *t, int elem);

// Deallocates all the nodes in the binary search tree
void dispose(Node *t);

// The print function prints all the elements of the binary search 
// tree rooted at t. The order of the printing is unspecified. 
// The function prints nothing if the tree is empty.
void print(const Node *t);

// Returns the number of elements in the tree to which t points.
int size(const Node *t);


// The minimum function returns a pointer to the node containing
// the minimum element in the tree to which t points. 
// The function returns null if the tree is empty.
Node *minimum(Node *t);

