#include "cCell.h"

cCell::cCell()
{

}

void cCell::setD(int data)
{
    this->data = data;
}

int cCell::getD()
{
    return this->data;
}

cCell::~cCell()
{
    //dtor
}
