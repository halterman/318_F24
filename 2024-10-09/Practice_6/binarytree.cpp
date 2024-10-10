#include <iostream>

#include "binarytree.h"
#include "bt_helper.h"
#include "tree_printer.h"

// Constructs an empty binary tree.
BinaryTree::BinaryTree(): root{nullptr} {}

// Frees up the memory held by the binary tree
BinaryTree::~BinaryTree() {
    dispose(root);
}


// Returns the number of elements in the tree.
int BinaryTree::size() const {
    return ::size(root);
}


// Returns the minimum element in the tree  to which t points, 
// if it exists; otherwise, the method returns an empty optional.
std::optional<int> BinaryTree::minimum() const {
    Node *min = ::minimum(root);
    if (min) {
        return min->data;  // Return the minimal value
    }
    else {
        return std::nullopt;   // Empty tree, so return empty optional
    }
}

// Returns the height of a binary tree.
int BinaryTree::height() const {
    return ::height(root);
}

// Creates a random binary tree
void BinaryTree::make_random(int size, int n) {
    root = ::make_tree(size, n);
}


// Draws the structure of the binary search tree.
void BinaryTree::draw() const {
    print_tree(root);
}

