//
// Created by Sam Feifer on 12/23/20.
//

#include "tower.h"
#include <stdexcept>
#include <iostream>

tower::tower() : numSteps(0) {}

void tower::towers(int n, char a, char b, char c) {
    if (n <= 0) {
        throw std::invalid_argument("Cannot have less than 1 disc");
    } if (n == 1) {
        std::cout << "Disc moved to " << b << " from " << a << std::endl;
        ++numSteps;
    } else {
        towers(n - 1, a, c, b);
        towers(1, a, b, c);
        towers(n - 1, c, b, a);
    }
}

size_t tower::towerSolver() {
    int n = 8;
    towers(n, 'A', 'B', 'C');
    return numSteps;
}

int main() {
    tower t1;
    size_t s = t1.towerSolver();
    std::cout << "Solution took " << s << " steps" << std::endl;
    return 0;
};