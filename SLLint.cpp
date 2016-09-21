#include "SLLint.h"
#include "iostream"

using namespace std;

void CreateList(list &l)
{
    l.first = nil;
}

adr alokasi(infotype x)
{
    adr p = new elemen;
    p->info = x;
    p->next = nil;
    return p;
}

adr FindElm(list l, infotype x)
{
    adr p = l.first;
    while ((p->info != x) && (p != nil))
    {
        p = p->next;
    }
    return p;

}
void InsertFirst(list &l, adr p)
{
    if (l.first != nil)
    {
        p->next = l.first;
        l.first = p;
    }
    else
    {
        l.first = p;
    }
}

void InsertLast(list &l, adr p)
{
    if (l.first != nil)
    {
        adr q = l.first;
        while (q->next != nil)
        {
            q = q->next;
        }
        q->next = p;
    }
    else
    {
        l.first = p;
    }
}

void InsertAfter(list &l, adr p, adr prev)
{
    p->next = prev->next;
    prev->next = p;
}

void InsertAsc(list &l, adr p)
{
    adr q = l.first;
    adr r = q;
    if (q->info > p->info)
    {
        InsertFirst(l, p);
    }
    else
    {
        while ((q->info < p->info) && (q->next != nil))
        {
            r = q;
            q = q->next;
        }
        (q->next == nil) ? InsertLast(l, p): InsertAfter(l,p,r);
    }
}

void showlist(list l)
{
    adr q = l.first;
    while (q != nil)
    {
        cout<<q->info<<" ";
        q = q->next;
    }
    cout<<"\n";
}
