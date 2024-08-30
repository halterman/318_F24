#include <random>
#include "randrange.h"


// Returns a pseudorandom integer in the 
// begin...end - 1, inclusive
int randrange(int begin, int end) {
    static std::random_device rd;
    static std::mt19937 mt_generator(rd());
    std::uniform_int_distribution<int> dist(begin, end - 1);
    return dist(mt_generator);
}

