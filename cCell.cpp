#include "cCell.h"

cCell::cCell()
{

}

int cCell::getD()
{
    return this->data;
}

void cCell::setD(int data)
{
    this->data = data;
}

cCell* cCell::getNext()
{
    return this->next;
}

void cCell::setNext(cCell *next)
{
    this->next = next;
}

cCell::~cCell()
{
    //dtor
}
