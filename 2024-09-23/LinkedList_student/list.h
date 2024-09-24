#pragma once

struct Node {
    int data;
    Node *next; // Link to the next node in the list
};


class LinkedList {
    Node *head;
    Node *tail;
public:
    // Make an empty list
    LinkedList();
    // Insert val into list
    void insert(int val);
    // Print the contents of the list
    void print() const;
    // See if an element is present
    bool find(int val) const;
    // Remove an element from the list
    void remove(int val);
};


