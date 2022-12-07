#ifndef DLL_FIRST_LAST_H_INCLUDED
#define DLL_FIRST_LAST_H_INCLUDED

#include <string>
#include <iostream>
using namespace std;

#define info(P) (P)->info
#define next(P) (P)->next
#define prev(P) (P)->prev
#define first(L) ((L).first)
#define last(L) ((L).last)

typedef int infotype;
typedef struct elmList *adr;

struct elmList {
    infotype info;
    adr next;
    adr prev;
};

struct List{
    adr first;
    adr last;
};

void createList(List &L);
adr createElemen(infotype dataBaru);
void insertFirst(List &L, adr p);
void insertLast(List &L, adr p);
void insertAfter(List &L, adr prec, adr p);
void insertAscending(List &L, infotype dataBaru);
void deleteFirst(List &L);
void deleteLast(List &L);
void deleteAfter(List &L, adr prec);
void deleteElm(List &L, infotype dataHapus);
void printList(List L);
bool findElemen(List L, infotype dataDicari);
int frequencyofElm(List L, infotype dataDicari);

#endif // DLL_FIRST_LAST_H_INCLUDED
