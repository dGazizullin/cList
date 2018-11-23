#ifndef CLIST_H
#define CLIST_H
#include <iostream>
#include "cCell.h"
using namespace std;

class cList
{
public:
    cList();
    void push(int data);
    int pop();
    int getFirstD();
    cCell* getFirst();
    void setFirst(cCell *first);
    string getName();
    void setName(string name);
    ~cList();
private:
    string name;
    cCell *first, *next;
};

#endif // CLIST_H
