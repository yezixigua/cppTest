#include "QueueTest.h"

QueueTest::QueueTest(/* args */)
{
}

QueueTest::~QueueTest()
{
}

void QueueTest::print()
{
    cout << "queue.size()=" << queue.size() << " queue.first()=" << queue.front() << "  queue.end()=" << queue.back() << endl;
}

void QueueTest::test1()
{
    queue.push(1);
    print();
    queue.push(2);
    print();
    queue.pop();
    print();
}