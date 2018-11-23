#include <iostream>
#include "cList.h"
#include "cCell.h"
using namespace std;

int main(){
    cList *ls = new cList;
    ls->push(1);
    cout << "\n";
    ls->push(2);
    cout << "\n";
    ls->push(3);
    cout << "\ngetFirstD() test: " << ls->getFirstD();
    cout << "\n";
    cout << ls->pop() << "\n";
    cout << ls->pop() << "\n";
    cout << ls->pop() << "\n";
    cout << ls->pop() << "\n";
    cout << ls->pop() << "\n";
    cout << ls->pop() << "\n";


    //ls.->pop(1);
    //ls->Show();
    //ls->pop(4);
    //ls->Show();





}
