#ifndef QUEUE_H
#define QUEUE_H

#include "../cList.h"



class Queue : public cList
{
public:
    Queue();
    cCell* getLast();
    void setLast(cCell *last);
    void push(int data);
    int pop();

private:
    cCell *last;
};

#endif // QUEUE_H
