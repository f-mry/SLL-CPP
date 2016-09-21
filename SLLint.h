#ifndef SLLINT_H_INCLUDED
#define SLLINT_H_INCLUDED
#define nil NULL
#include <iostream>

typedef int infotype;
typedef struct elemen *adr;
struct elemen
{
    infotype info;
    adr next;
};

struct list
{
    adr first;
};

void CreateList(list &l);
adr alokasi(infotype x);
adr FindElm(list l,infotype x);
void InsertFirst(list &l, adr p);
void InsertLast(list &l, adr p);
void InsertAfter(list &l, adr p, adr prev);
void InsertAsc(list &l, adr p);
void showlist(list l);






#endif // SLLINT_H_INCLUDED
