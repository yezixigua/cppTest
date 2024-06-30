#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
#include <iostream>


using namespace std;

class ThTest
{
private:
    /* data */
    bool isRunning;
    pthread_t thread;
    int fd;

    static void *run(void *para);

public:
    ThTest(/* args */);
    ~ThTest();

    void start();

    void stop();

    void test();
};

