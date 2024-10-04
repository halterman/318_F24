#include <iostream>

#include "bst.h"
#include "bst_helper.h"
#include "tree_printer.h"

// Constructs an empty binary search tree.
BinarySearchTree::BinarySearchTree(): root{nullptr} {}

// Inserts the element elem into the binary search tree, 
// if possible. The method ignores an attempt to insert
// a duplicate element.
void BinarySearchTree::insert(int elem) {
    root = ::insert(root, elem);
}

// The print method prints all the elements of the binary search 
// tree. The order of the printing is unspecified. 
// The function prints nothing if the tree is empty.
void BinarySearchTree::print() const {
    ::print(root);
    std::cout << '\n';
}

// Returns the number of elements in the tree.
int BinarySearchTree::size() const {
    return ::size(root);
}


// Returns the minimum element in the tree  to which t points, 
// if it exists; otherwise, the method returns an empty optional.
std::optional<int> BinarySearchTree::minimum() const {
    if (root) {
        return ::minimum(root);  // Return the minimal value
    }
    else {
        return std::nullopt;     // Empty tree, so return empty optional
    }
}

// Draws the structure of the binary search tree.
void BinarySearchTree::draw() const {
    print_tree(root);
}

