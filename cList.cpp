#include "cList.h"
#include "cCell.h"
#include <iostream>
using namespace std;

cList::cList()
{
    this->setFirst(nullptr);
}


//ДОБАВЛЕНИЕ ЭЛЕМЕНТА В СПИСОК
void cList::push(int data)
{
    cCell *cell = new cCell;    // образуем пустую ячейку
    cell->setD(data);           //кладем туда данные
    if (first == nullptr)       //если 1-й элемент стека
    {
        this->setFirst(cell);       //новая ячейка - первая
        cell->setNext(nullptr);     //кладем в ячейку нуль-указатель
    }else                           //если стек уже не пуст
    {
        cell->setNext(this->getFirst());    //помещаем в указатель на следующий элемент адрес предудущей ячейки
        this->setFirst(cell);               //теперь новая ячейка - первая
    }
    first = this->getFirst();      //test
    cout << first->getD();        //test
}

int cList::pop()
{
    if(this->getFirst() != nullptr)              //если стек не пустой
    {
        cCell *first = this->getFirst();        //получаем первый элемент стека
        if(first->getNext() != nullptr)             //если первый элемент - не единственный в стеке
        {
            int d = first->getD();                  //получаем данные удаляемой ячейки
            this->setFirst(first->getNext());       //новый первый элемент - тот, что был вторым
            delete first;                           //очищаем память
            return d;                               //возвращаем данные удаляемого элемента
        }else                                       //если в стеке 1 элемент
        {
            int d = first->getD();                  //получаем данные удаляемой ячейки
            this->setFirst(nullptr);                //удаляем его
            cout << "\nStack is empty.\n";          //test
            return d;                               //возвращаем данные удаляемого элемента
        }
    }else                                           //если стек пуст
    {
        cout << "\nStack is empty.\n";
        return false;
    }
}

int cList::getFirstD()
{
    cCell *first = this->getFirst();
    return first->getD();
}

cCell* cList::getFirst()
{
    return this->first;
}

void cList::setFirst(cCell *first)
{
    this->first = first;
}

string cList::getName()
{
    return this->name;
}

void cList::setName(string name)
{
    this->name = name;
}
