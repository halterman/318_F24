#pragma once

#include "node.h"


// Builds a random binary tree of integers. Returns
// a pointer to the root of the tree.
// The tree contains size nodes. The value within each node 
// is in the range 0...n - 1, inclusive.
Node *make_tree(size_t size, int n);

// Frees up the space held by the nodes in the tree.
void dispose(Node *t);

// Returns the number of elements in the tree rooted at t.
int size(const Node *t);

// Returns the height of a binary tree.
int height(const Node *t);

// Returns a pointer to the node with a minimum element in the tree 
// rooted at t. 
// Returns null if the tree is empty.
Node *minimum(Node *t);

