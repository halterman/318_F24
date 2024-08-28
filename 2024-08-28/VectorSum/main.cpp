#include <iostream>
#include <vector>
#include "vecsum.h"

int main() {
    std::vector<int> seq { 10, 20, 30, 40 };
    std::cout << vecsum(seq) << '\n';
}