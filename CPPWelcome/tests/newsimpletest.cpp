/* 
 * File:   newsimpletest.cpp
 * Author: pippo
 *
 * Created on Sep 3, 2015, 1:22:07 PM
 */

#include <stdlib.h>
#include <iostream>

/*
 * Simple C++ Test Suite
 */

long factorial(int arg);

void testFactorial() {
    int arg;
    long result = factorial(arg);
    if (true /*check result*/) {
        std::cout << "%TEST_FAILED% time=0 testname=testFactorial (newsimpletest) message=error message sample" << std::endl;
    }
}

int main(int argc, char** argv) {
    std::cout << "%SUITE_STARTING% newsimpletest" << std::endl;
    std::cout << "%SUITE_STARTED%" << std::endl;

    std::cout << "%TEST_STARTED% testFactorial (newsimpletest)" << std::endl;
    testFactorial();
    std::cout << "%TEST_FINISHED% time=0 testFactorial (newsimpletest)" << std::endl;

    std::cout << "%SUITE_FINISHED% time=0" << std::endl;

    return (EXIT_SUCCESS);
}

