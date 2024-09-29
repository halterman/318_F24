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

    std::cout << "==================\n";

    LinkedList list2;
    list2.insert(10);
    list2.insert(20);
    list2.insert(30);
    list2.insert(40);
    list2.insert(50);
    list2.print();
    std::cout << list.is_ascending() << '\n';
    std::cout << list2.is_ascending() << '\n';

    std::vector<int> v {45, 35, 25, 15};
    list.from_vector(v);
    list.print();

    std::cout << "==================\n";

    std::vector<int> v2 {50, 45, 35, 82, 25, 15, 4, 19, 22};
    list.from_vector(v2);
    list.print();
    list.print_reverse();
    std::cout << '\n';
    list.sort();
    list.print();
    list.print_reverse();
    std::cout << '\n';

}
