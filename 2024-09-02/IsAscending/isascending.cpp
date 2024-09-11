// IsAscending.cpp
// Created 4/27/2022 9:02:27 PM

#include <iostream>
#include <vector>
#include <functional>
#include <numeric>

#include "randrange.h"
#include "stopwatch.h"


bool is_ascending1(const std::vector<int>& v) {
    size_t n = v.size();
    for (size_t i = 0; i < n - 1; i++) {
        for (size_t j = i + 1; j < n; j++) {
            if (v[i] > v[j]) {
                return false;
            }
        }
    }
    return true;
}

bool is_ascending2(const std::vector<int>& v) {
    size_t n = v.size();
    for (size_t i = 0; i < n - 1; i++) {
        if (v[i] > v[i + 1]) {
            return false;
        }
    }
    return true;
}

double time_it(const std::vector<int>& vec, std::function<bool(const std::vector<int>&)> f) {
    Stopwatch timer;
    timer.start();
    bool ans = f(vec);
    timer.stop();
    double time = timer.elapsed();
    std::cout << std::boolalpha << "Answer: " << ans 
              << ", " << time << " sec elapsed" << '\n';
    return time;

}

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cout << "Provide vector size on command line to test is_ascending\n";
    }
    else {
        const int VECTOR_SIZE = atoi(argv[1]);
        std::cout << "Vector size: " << VECTOR_SIZE << '\n';

        std::vector<int> bigvec(VECTOR_SIZE);
        std::iota(bigvec.begin(), bigvec.end(), 0);

        double t1 = time_it(bigvec, is_ascending1);
        double t2 = time_it(bigvec, is_ascending2);
        std::cout << "Speed up: " << t1/t2 << "x\n";
    }

}



