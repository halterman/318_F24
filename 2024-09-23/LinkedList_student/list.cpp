#include <iostream>
#include "list.h"
#include "list_helper.h"

//-------------------------------------------------------------
// Method definitions for the linked list class

// Make an empty list
LinkedList::LinkedList(): head{nullptr}, tail{nullptr} {}

// Insert val into list
void LinkedList::insert(int val) {
    Node *temp = new Node;
    temp->data = val;
    temp->next = nullptr;
    if (!tail) {  // List is empty; make a new node
        head = tail = temp;
    }
    else {   // List is nonempty; add to back
        tail->next = temp;
        tail = temp;
    }
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
// Remove an element from the list
void LinkedList::remove(int val) {
    // Calls your remove function
    head = ::remove(head, val);
}

