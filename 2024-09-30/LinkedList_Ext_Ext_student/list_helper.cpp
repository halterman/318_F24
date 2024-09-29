#include <iostream>
#include "list_helper.h"

// Prints the elements in the list to which p points.
void print(const Node *p) {
    (void)p;  // Avoid unused parameter warning
    // Add with your code
}


// Returns a pointer to the node containing the given element that
// is closest to the front of the list.
// p points to the first node in the list.
// val is the element to find.
// Returns nullptr if val is not present in the list
Node *find(Node *p, int val) {
    (void)val;  // Avoid unused parameter warning
    return p;  // Replace with your code
}

// Inserts an element onto the end of the list
Node *insert(Node *p, int val) {
    Node *temp = new Node;
    temp->data = val;
    temp->next = nullptr;
    if (!p) {  // List is empty; add the new node
        p = temp;
    }
    else {   // Place at end of list
        Node *cursor = p;
        while (cursor->next) {
            cursor = cursor->next;
        }
        // Cursor now should point to last element
        cursor->next = temp;
    }
    return p;
}

// Removes first occurrence of val from the list to which p points.
// If val is not present, the function does not modify the list.
// Returns a pointer to the list to which p points (note that
// this can replace p if val is in the first node).
Node *remove(Node *p, int val) {
    // Replace with your code
    (void)val;  // Avoid unused parameter warning
    return p;
}


// Returns true if the elements of the list starting at the node 
// to which p points appear in non-descending order; otherwise, 
// returns false. p points to a node in the list. Returns true
// if the list is empty.
bool is_ascending(const Node *p) {
    (void)p;  // Avoid unused parameter warning
    return true;
}


// Returns a pointer to the beginning of a linked list containing 
// the elements in a vector of integers. Returns nullptr if the 
// vector is empty
Node *from_vector(const std::vector<int>& vec) {
    (void)vec;  // Avoid unused parameter warning
    return nullptr;
}


// Deallocates all the nodes in a linked list starting at the node 
// to which p  points.
void dispose(Node *p) {
    (void)p;  // Avoid unused parameter warning
}


// Prints the contents of the list in reverse order from the back
// upto the node to which p points.
void print_reverse(const Node *p) {
    // Replace with your code
    (void)p; // Avoid unused parameter warning
}


// Sorts in non-decreasing order the contents of the list from 
// the node to which p points to the end.
void sort(Node *p) {
    // Replace with your code
    (void)p; // Avoid unused parameter warning
}

