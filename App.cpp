//
// Created by akimfeopentov on 13.09.22.
//

#include "App.h"
void App::startApp() {
    bool exit = false;
    while(!exit)
    {
        appWriter->newSolve();

        for(int index = 1; index <= 3; index++)
            appReader->readRatio(index, appEquation);

        appSolver->toSolve(appEquation);

        appWriter->writeDes(appEquation->getX1(), appEquation->getX2(), appEquation->getNum());

        exit = appReader->continueSolve();
    }
}