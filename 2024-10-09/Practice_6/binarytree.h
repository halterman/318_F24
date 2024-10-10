#pragma once

#include <optional>

#include "node.h"

class BinaryTree {
    Node *root;
public:
    // Constructs an empty binary tree.
    BinaryTree();

    // Frees up the memory held by the binary tree
    ~BinaryTree();

    // Prevent copying and assignment
    BinaryTree(const BinaryTree&) = delete;
    BinaryTree(BinaryTree&&) = delete;
    BinaryTree& operator=(const BinaryTree&) = delete;
    BinaryTree& operator=(BinaryTree&&) = delete;

    // Returns the number of elements in the tree.
    int size() const;

    // Returns the minimum element in the tree  to which t points, 
    // if it exists; otherwise, the method returns an empty optional.
    std::optional<int> minimum() const;

    // Returns the height of a binary tree.
    int height() const;

    // Creates a random binary tree
    void make_random(int size, int n);

    // Draws the structure of the binary search tree.
    void draw() const;
};


