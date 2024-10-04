#include <iostream>
#include "list.h"
#include "list_helper.h"

//-------------------------------------------------------------
// Method definitions for the linked list class

// Make an empty list
LinkedList::LinkedList(): head{nullptr} {}

// Clean up an existing list. Deallocates all the nodes in the
// list.
LinkedList::~LinkedList() {
    dispose(head);
    head = nullptr;
}

// Insert val into list
void LinkedList::insert(int val) {
    head = ::insert(head, val);
}

// Print the contents of the list
void LinkedList::print() const {
    // Calls your print function
    ::print(head);
}

// See if an element is present
bool LinkedList::find(int val) const {
    // Calls your find function
    return ::find(head, val) != nullptr;
}

// Remove the first occurrence of an element from the list
void LinkedList::remove(int val) {
    // Calls your remove function
    head = ::remove(head, val);
}

// Returns true if the elements of the list appear in 
// non-descending order; otherwise, returns false.
// Returns true if the list is empty.
bool LinkedList::is_ascending() const {
    return ::is_ascending(head);
}

// Replaces the contents of the linked list with the contents of 
// a vector of integers.
void LinkedList::from_vector(const std::vector<int>& vec) { 
    dispose(head);
    head = ::from_vector(vec);
}


