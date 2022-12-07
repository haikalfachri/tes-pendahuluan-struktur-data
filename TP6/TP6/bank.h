#ifndef BANK_H_INCLUDED
#define BANK_H_INCLUDED

#include <string>
#include <iostream>
using namespace std;

#define info(P) (P)->info
#define next(P) (P)->next
#define prev(P) (P)->prev
#define first(L) ((L).first)
#define last(L) ((L).last)

struct bank{
    string nasabah;
    string rekening;
    int saldo;
};

typedef bank infotype;
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

void create_list(List &L);
adr newElement(infotype dataBaru);
void insertLast(List &L, adr p);
void showAllData(List L);
bool searching(List L, infotype x);
int selectMenu();

#endif // BANK_H_INCLUDED
