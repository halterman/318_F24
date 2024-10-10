#include <iostream>
#include <vector>

#include "randrange.h"
#include "bt_helper.h"


// Builds a random binary tree of integers. Returns
// a pointer to the root of the tree.
// The tree contains size nodes. The value within each node 
// is in the range 0...n - 1, inclusive.
Node *make_tree(size_t size, int n) {
    std::vector<Node *> nodes;
    // Create a forest of single node trees
    for (size_t i = 0; i < size; i++) {
        Node *node = new Node;
        node->data = randrange(0, n);
        node->left = node->right = nullptr;
        nodes.push_back(node);
    }
    // Assemble the tree from the forest of leaves
    while (nodes.size() > 2) {
        Node *left_leaf = nodes.back();
        nodes.pop_back();
        Node *right_leaf = nodes.back();
        nodes.pop_back();
        Node *parent = nodes.back();
        nodes.pop_back();
        parent->left = left_leaf;
        parent->right = right_leaf;
        // Generate random index
        int index = randrange(0, static_cast<int>(nodes.size()));
        nodes.insert(nodes.begin() + index, parent);
        //nodes.push_back(parent);
    }
    // Two nodes remaining in the vector?
    if (nodes.size() == 2) {
        Node *second = nodes.back();
        nodes.pop_back();
        Node *first = nodes.back();
        if (randrange(0, 2) == 0) {
            first->left = second;
        }
        else {
            first->right = second;
        }
    }
    // Return the single node remaining in the vector.
    return nodes.back();  
}

// Frees up the space held by the nodes in the tree.
void dispose(Node *t) {
    // Replace with your code
}


// Returns the number of elements in the tree to which t points.
int size(const Node *t) {
    // Replace with your code
    return -1;
}


// Returns the height of a binary tree.
int height(const Node *t) {
    // Replace with your code
    return -1;
}


// Returns a pointer to a minimum element in the tree rooted at t. 
// Returns null if the tree is empty.
Node *minimum(Node *t) {
    // Replace with your code
    return nullptr;
}

