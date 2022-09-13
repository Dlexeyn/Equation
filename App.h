//
// Created by akimfeopentov on 13.09.22.
//
#include <iostream>
#include "Solver.h"
#include "reader.h"
#include "equation.h"
#include "writer.h"

#ifndef EQUATION_APP_H
#define EQUATION_APP_H


class App {
public:
    reader *appReader = nullptr;
    Solver *appSolver = nullptr;
    writer *appWriter = nullptr;
    equation *appEquation = nullptr;
    void startApp();

};


#endif //EQUATION_APP_H
