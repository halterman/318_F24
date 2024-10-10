#include <iostream>
#include "binarytree.h"

int main() {
    BinaryTree tree;
    tree.draw();
    auto min = tree.minimum();
    if (min.has_value()) {
        std::cout << "Minimum value is " << min.value() << '\n';
    }
    else {
        std::cout << "Empty tree has no minimum value\n";
    }
    std::cout << "------------------\n";
    tree.make_random(20, 100);
    tree.draw();
    std::cout << "There are " << tree.size() << " elements in the tree\n";

    min = tree.minimum();
    if (min.has_value()) {
        std::cout << "Minimum value is " << min.value() << '\n';
    }

    std::cout << "------------------\n";
    tree.make_random(1, 100);
    tree.draw();
    std::cout << "There are " << tree.size() << " elements in the tree\n";

    min = tree.minimum();
    if (min.has_value()) {
        std::cout << "Minimum value is " << min.value() << '\n';
    }

}
