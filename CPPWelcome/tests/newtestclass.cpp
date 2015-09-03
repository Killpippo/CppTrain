/*
 * File:   newtestclass.cpp
 * Author: pippo
 *
 * Created on Sep 3, 2015, 1:26:35 PM
 */

#include "newtestclass.h"


CPPUNIT_TEST_SUITE_REGISTRATION(newtestclass);

newtestclass::newtestclass() {
}

newtestclass::~newtestclass() {
}

void newtestclass::setUp() {
}

void newtestclass::tearDown() {
}

long factorial(int arg);

void newtestclass::testFactorial() {
    int arg;
    long result = factorial(arg);
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

