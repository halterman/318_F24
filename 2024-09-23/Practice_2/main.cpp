#include <iostream>
#include "list.h"


int main() {
    LinkedList list;
    list.insert(45);
    list.insert(100);
    list.insert(13);
    list.insert(5);
    list.insert(26);
    list.insert(4);
    list.insert(34);

    // Try out the find method
    std::cout << std::boolalpha << '\n';
    std::cout << list.find(45) << '\n';
    std::cout << list.find(5) << '\n';
    std::cout << list.find(34) << '\n';
    std::cout << list.find(10) << '\n';
    std::cout << "----------------\n";

    list.print();

    std::cout << "----------------\n";
    list.remove(45);
    list.print();

    std::cout << "----------------\n";
    list.remove(34);
    list.print();

    std::cout << "----------------\n";
    list.remove(5);
    list.print();
}
