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
    fd = pthread_create(&pid, nullptr, run, this);
}

void ThTest::stop() {
    isRunning = false;
}

void ThTest::test() {
    start();
    for (int i = 0; i < 10; i++)
    {
       queue.push(i);
       sleep(1);
    }
    
    stop();
}


void * ThTest::run(void * para)
{
    ThTest* obj = static_cast<ThTest*>(para);
    while (obj->isRunning)
    {
        if (obj->queue.size() > 0)
        {
            /* code */
            int num = obj->queue.back();
            cout << "pthread is running current num = " << num << endl;
        }
        sleep(1);
    }
    
    return nullptr;
}