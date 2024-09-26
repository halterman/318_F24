#pragma once

#include <vector>

// A node type used to build singly-linked lists
struct Node {
    int data;
    Node *next; // Link to the next node in the list
};


// An abstract data type for a singly-listed list
class LinkedList {
    Node *head; // Points to the first element in the list
public:
    // Make an empty list
    LinkedList();

    // Clean up an existing list
    ~LinkedList();

    // Insert val onto back of the list
    void insert(int val);

    // Print the contents of the list
    void print() const;

    // See if an element is present
    bool find(int val) const;

    // Remove the first occurrence of an element from the list
    void remove(int val);

    // Returns true if the elements of the list appear in 
    // non-descending order; otherwise, returns false.
    // Returns true if the list is empty.
    bool is_ascending() const;
    
    // Replaces the contents of the linked list with the contents of 
    // a vector of integers.
    void from_vector(const std::vector<int>& vec);
};


