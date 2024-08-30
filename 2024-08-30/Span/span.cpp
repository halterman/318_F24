#include <iostream>
#include <iomanip>
#include <vector>
#include <numeric>
#include <functional>
#include <random>

#include "stopwatch.h"

int span1(const std::vector<int>& v) {
    size_t n = v.size();
    int min = v[0],
        max = min;
    for (size_t i = 1; i < n; i++) {
        if (min > v[i])
            min = v[i];
    }
    for (size_t i = 1; i < n; i++) {
        if (max < v[i])
            max = v[i];
    }
    return max - min;
}

int span2(const std::vector<int>& v) {
    size_t n = v.size();
    int min = v[0],
        max = min;
    for (size_t i = 1; i < n; i++) {
        if (min > v[i])
            min = v[i];
        if (max < v[i])
            max = v[i];
    }
    return max - min;
}

double time_it(std::function<int(const std::vector<int>)> f, 
                 const std::vector<int>& vec) {
    Stopwatch timer;
    timer.start();
    f(vec);
    timer.stop();
    return timer.elapsed();
}

std::vector<int> bigvec(100'000'000);

int main() {
//    std::vector<int> vec1 {1, 2, 3, 4},
//                     vec2 {2, 1, 3, 4},
//                     vec3 {30, 40, 50, 80};
//    std::cout << span1(vec1) << '\n';
//    std::cout << span1(vec2) << '\n';
//    std::cout << span1(vec3) << '\n';
//
//    std::cout << span2(vec1) << '\n';
//    std::cout << span2(vec2) << '\n';
//    std::cout << span2(vec3) << '\n';

    std::random_device rd;
    std::mt19937 g(rd());

    std::iota(bigvec.begin(), bigvec.end(), 0);
    std::shuffle(bigvec.begin(), bigvec.end(), g);
//
//    std::cout << "span1 (" << bigvec.size() << "): " << time_it(span1, bigvec) << '\n';
//    std::cout << "span2 (" << bigvec.size() << "): " << time_it(span2, bigvec) << '\n';
//    std::cout << CLOCKS_PER_SEC << '\n';
//
//    std::cout << "--------------------------\n";

    std::cout << "Size       span1       span2       Speedup\n";
    std::cout << "------------------------------------------\n";
    std::cout << std::fixed << std::setprecision(8);
    for (int i = 5000; i < 100001; i += 5000) {
        std::vector<int> vec(i);
        std::iota(vec.begin(), vec.end(), 0);
        std::shuffle(vec.begin(), vec.end(), g);

        double t1 = time_it(span1, vec);
        double t2 = time_it(span2, vec);
        std::cout << std::setw(6) << i 
                  << std::setw(12) << t1 
                  << std::setw(12) << t2  
                  << std::setw(12) 
                  << t1/t2 << "x\n";
    }
}

