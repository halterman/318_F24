#pragma once

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
    // Insert val onto back of the list
    void insert(int val);
    // Print the contents of the list
    void print() const;
    // See if an element is present
    bool find(int val) const;
    // Remove the first occurrence of an element from the list
    void remove(int val);
};


