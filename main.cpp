#include <iostream>
#include "cList.h"
using namespace std;

int main(){
    cList ls;
    ls.push(1);
    ls.push(2);
    ls.push(3);
    ls.push(4);
    ls.push(5);
    ls.Show();
    ls.popN(1);
    ls.Show();
    ls.popN(4);
    ls.Show();
}
