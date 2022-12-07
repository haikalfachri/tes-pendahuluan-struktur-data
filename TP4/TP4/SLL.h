#ifndef SLL_H_INCLUDED
#define SLL_H_INCLUDED

#include <iostream>
using namespace std;

#define info(P) (P)->info
#define next(P) (P)->next
#define first(MH) ((MH).first)

//NIM : 1301202398
typedef char infotype;
typedef struct element *adr;

struct element {            //adr == Node, head == MH
    infotype info;
    adr next;
};

struct List{
    adr first;
};

// 1301202398 % 4 = 2
// Muhamad Fachri Haikal = MH
void createList(List &MH); //Procedure Create_list(in/out L : List)
adr newElement(infotype x); // Procedure newElement(in x : infotype, out p : adr)
void insertFirst(List &MH, adr p); // Procedure insertFirst(in/out L : List, in p : adr)
void insertLast(List &MH, adr p);
void insertAfter(List &MH, adr  prec, adr p);
void show(List MH); // Procedure show(in L : List)
adr deleteLast(List &MH); //Procedure DeleteLast(In/Out L : List)
adr deleteFirst(List &MH); //TUGAS TP (1301202398 % 4 = 2)
adr deleteAfter(List &MH, adr prec, adr p);

adr searchList(List MH, char x);

#endif // SLL_H_INCLUDED

