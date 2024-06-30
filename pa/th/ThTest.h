#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
#include <iostream>
#include <queue>


using namespace std;

class ThTest
{
private:
    /* data */
    bool isRunning;
    pthread_t pid;
    int fd;
    queue<int> queue;

    static void *run(void *para);

public:
    ThTest(/* args */);
    ~ThTest();

    void start();

    void stop();

    void test();
};

