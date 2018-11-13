#ifndef CLIST_H
#define CLIST_H
#include <iostream>

class cList
{                                                      //Список cList
private:
    int data,counter;
    cList *Head, *Tail, *Next, *Prev;
public:
    cList(): counter(0),Head(NULL),Tail(NULL){};     //Инициализация конструктором по умолчанию
    void push(int);
    void Show();
    void popN(int);                                 //Функция принимает int параметр, обозначающий номер удаляемого элемента
    ~cList();
};

#endif // CLIST_H
