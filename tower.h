//
// Created by Sam Feifer on 12/23/20.
//

#ifndef TOWERSOFHANOI_TOWER_H
#define TOWERSOFHANOI_TOWER_H


#include <cstddef>

class tower {
private:
    size_t numSteps;
public:
    tower();

    void towers(int n, char a, char b, char c);

    size_t towerSolver();

};


#endif //TOWERSOFHANOI_TOWER_H
