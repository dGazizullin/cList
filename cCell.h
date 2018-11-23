#ifndef CCELL_H
#define CCELL_H


class cCell
{
public:
    cCell();
    ~cCell();
    int getD();
    void setD(int data);
    cCell* getNext();
    void setNext(cCell *next);
    cCell* next; //move to private?
private:
    int data;
};

#endif // CCELL_H
