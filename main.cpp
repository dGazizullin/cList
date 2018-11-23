#include <iostream>
#include "cList.h"
#include "cCell.h"
#include "Queue.h"
using namespace std;

int main(){
    cList *ls = new cList;
    cout << "добавляем элементы в стек:\n";
    ls->push(1);
    cout << "\n";
    ls->push(2);
    cout << "\n";
    ls->push(3);
    cout << "\nполучаем последний элемент стека:   " << ls->getFirstD();
    cout << "\nудаляем элементы стека:\n";
    cout << ls->pop() << "\n";        //
    cout << ls->pop() << "\n";
    cout << ls->pop() << "\n";
    cout << ls->pop() << "\n";

    Queue *q = new Queue;
    cout << "добавляем новые элементы в очередь:\n";
    q->push(1);
    cout << "\n";
    q->push(2);
    cout << "\n";
    q->push(3);
    cout << "\n";
    q->push(4);
    cout << "\nполучаем первый элемент очереди: " << q->getFirstD() << "\nудаляем элементы очереди:\n";

    cout << "\n" << q->pop() << "\n";
    cout << q->pop() << "\n";
    cout << q->pop() << "\n";
    cout << q->pop() << "\n";
    cout << q->pop() << "\n";







}
