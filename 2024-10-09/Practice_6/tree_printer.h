// Liberally adapted from 
// https://www.techiedelight.com/c-program-print-binary-tree/

#include <string>
#include <iostream>

constexpr int HORIZONTAL_LINE = 0;
constexpr int VERTICAL_LINE   = 1;
constexpr int RIGHT_BRANCH    = 2;
constexpr int LEFT_BRANCH     = 3;
constexpr int CONNECTOR       = 4;
constexpr int SPACER          = 5;

const std::string connectors[] = {
    "--",
    "|",
    ".--",
    "`--",
    "     |",
    "      "
};


struct Trunk {
    Trunk *prev;
    int connector_index;
 
    Trunk(Trunk *prev, int n) { 
        this->prev = prev;
        this->connector_index = n;
    }
};
 
// Helper function to print branches of the binary tree
static void show_trunks(Trunk *p) {
    if (p) {
        show_trunks(p->prev);
        std::cout << connectors[p->connector_index];
    }
}


void print_tree(Node *root, Trunk *prev, bool is_left) {
    if (root) {
        int prev_connector = SPACER; 
        Trunk *trunk = new Trunk(prev, prev_connector);
        print_tree(root->right, trunk, true);
        if (!prev) {
            trunk->connector_index = HORIZONTAL_LINE;
        } else if (is_left) {
            trunk->connector_index = RIGHT_BRANCH;
            prev_connector = CONNECTOR;
        } else {
            trunk->connector_index = LEFT_BRANCH;
            prev->connector_index = prev_connector;
        }
        show_trunks(trunk);
        std::cout << " " << root->data << '\n';
        if (prev) {
            prev->connector_index = prev_connector;
        }
        trunk->connector_index = CONNECTOR;
        print_tree(root->left, trunk, false);
        delete trunk;
    }
}

void print_tree(Node *root) {
    print_tree(root, nullptr, false);
}
