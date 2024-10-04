#include <iostream>

#include "bst_helper.h"


// Inserts element elem into the binary search tree
// rooted at t if it is not already present. Returns 
// the potentially new root of the tree.
Node *insert(Node *t, int elem) {
    if (t) { 
        if (elem < t->data) {
            t->left = ::insert(t->left, elem);
        }
        else if (elem > t->data) {
            t->right = ::insert(t->right, elem);
        }
        // Else ignore duplicate
    } 
    else {
        t = new Node;
        t->data = elem;
        t->left = t->right = nullptr;
    }
    return t;
}

// The print function prints all the elements of the binary search 
// tree rooted at t. The order of the printing is unspecified. 
// The function prints nothing if the tree is empty.
void print(const Node *t) {
    // Replace with your code
}

// Returns the number of elements in the tree to which t points.
int size(const Node *t) {
    // Replace with your code
    return -1;  // -1 never should be a correct result!
}


// The minimum function returns the minimum element in the tree 
// to which t points. The function's behavior is undefined if 
// the tree is empty.
int minimum(const Node *t) {
    // Replace with your code
    return 0;
}
