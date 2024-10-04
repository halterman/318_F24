#include <iostream>
#include "bst.h"

int main() {
    BinarySearchTree tree;
    auto min = tree.minimum();
    if (min.has_value()) {
        std::cout << "Minimum value is " << min.value() << '\n';
    }
    else {
        std::cout << "Empty tree has no minimum value\n";
    }
    tree.draw();
    std::cout << "------------------\n";
    tree.insert(45);
    tree.insert(19);
    tree.insert(8);
    tree.insert(21);
    tree.insert(90);
    tree.insert(95);
    tree.insert(20);
    tree.draw();
    std::cout << "There are " << tree.size() << " elements in the tree\n";

    std::cout << "------------------\n";
    tree.print();
    std::cout << "------------------\n";

    min = tree.minimum();
    if (min.has_value()) {
        std::cout << "Minimum value is " << min.value() << '\n';
    }

}
