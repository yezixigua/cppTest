#include "ThTest.h"



ThTest::ThTest(/* args */)
{
    cout << "ThTest create" << endl;
}

ThTest::~ThTest()
{
    cout << "ThTest destroy" << endl;
}

void ThTest::start() {
    isRunning = true;
    fd = pthread_create(&thread, nullptr, run, this);
}

void ThTest::stop() {
    isRunning = false;
}

void ThTest::test() {
    start();
    sleep(10);
    stop();
}


void * ThTest::run(void * para)
{
    ThTest* obj = static_cast<ThTest*>(para);
    while (obj->isRunning)
    {
        cout << "pthread is running" << endl;
        sleep(1);
    }
    
    return 0;
}