#include <iostream>
#include "SLLint.h"

using namespace std;

int main()
{
    list l;

    adr p1;
    adr p2;

    CreateList(l);
    int x = 6;
    p1 =alokasi(x);
    x = 8;
    p2 = alokasi(x);
    InsertFirst(l, p1);
    InsertLast(l, p2);
    showlist(l);
    x = 9;
    p1 = alokasi(x);
    InsertAsc(l, p1);
    showlist(l);


    return 0;

}
