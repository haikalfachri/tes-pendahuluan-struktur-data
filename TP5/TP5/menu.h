#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED

#include <iostream>
using namespace std;

#define info(P) (P)->info
#define next(P) (P)->next
#define first(L) ((L).first)

//NIM: 1301202398 -> 9 mod 3 = 0 -> int
typedef int infotype;
typedef struct elmList *adr;

struct elmList {
    infotype info;
    adr next;
};

struct List{
    adr first;
};

void createList(List &L);
adr newElement(infotype dataBaru);
void showAllData(List L);
void insertLast(List &L, adr p);

//NIM: 1301202398 -> 9 mod 3 = 0 -> digit 8 = 3 -> ganjil -> function jumlahElement
int jumlahElement(List L);

void showDataGanjil(List L);

//menu
int selectMenu();

#endif // MENU_H_INCLUDED
