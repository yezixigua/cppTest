#include <iostream>
#include "pa/th/thTest.h"

void hello() {
    double temp = 10;
    std::cout << "Hello cpp: " << temp  << std::endl;
}

void threadTest() {
    ThTest t;
    t.test();
}


int main()
{
    threadTest();
    return 0;
}