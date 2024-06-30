#include <iostream>
#include "pa/th/thTest.h"
#include "pa/arr/QueueTest.h"

void hello() {
    double temp = 10;
    std::cout << "Hello cpp: " << temp  << std::endl;
}

void threadTest() {
    ThTest t;
    t.test();
}

void queueTest() {
    QueueTest t;
    t.test1();
}


int main()
{
    queueTest();
    return 0;
}