#pragma once

#include <optional>

#include "node.h"

class BinarySearchTree {
    Node *root;
public:
    // Constructs an empty binary search tree.
    BinarySearchTree();

    // Inserts the element elem into the binary search tree, 
    // if possible. The method ignores an attempt to insert
    // a duplicate element.
    void insert(int elem);

    // The print method prints all the elements of the binary search 
    // tree. The order of the printing is unspecified. 
    // The function prints nothing if the tree is empty.
    void print() const;

    // Returns the number of elements in the tree.
    int size() const;

    // Returns the minimum element in the tree  to which t points, 
    // if it exists; otherwise, the method returns an empty optional.
    std::optional<int> minimum() const;

    // Draws the structure of the binary search tree.
    void draw() const;
};
