#include "SLL.h"

void createList(List &MH){
    first(MH) = NULL;
}

adr newElement(infotype x){
    adr p = new element;

    info(p) = x;
    next(p) = NULL;
    return p;
}

void insertFirst(List &MH, adr p){
    if (first(MH) == NULL){
        first(MH) = p;
    } else{
        next(p) = first(MH);
        first(MH) = p;
    }
}

adr searchList(List MH, char x){
    adr p;

    p = first(MH);
    while (p != NULL){
        if (info(p) == x){
            return p;
        }
        p = next(p);
    }
    return p;
}

void insertLast(List &MH, adr p){
    adr last;
    if (first(MH) == NULL){
        first(MH) = p;
    } else{
        last = next(first(MH));
        while (next(last)!=NULL){
            last = next(last);
        }
         next(last) = p;
    }
}

void insertAfter(List &MH, adr  prec, adr p){
        next(p)=next(prec);
        next(prec)=p;
}

void show(List MH){
    adr p;

    if (first(MH) != NULL){
        p = first(MH);
        while (p != NULL){
            cout << info(p)<< " ";
            p = next(p);
        }
        cout << endl;
    } else{
        cout << "List Kosong" << endl;
    }
}

adr deleteLast(List &MH){
    adr p, q;

    if (first(MH) == NULL){
        p = NULL;
        cout << "List Kosong";
    } else if (next(first(MH)) == NULL){
        p = first(MH);
        first(MH) = NULL;
    } else{
        q = first(MH);
        p = first(MH);
        while (next(p) != NULL){
            q = p;
            p = next(p);
        }
        next(q) = NULL;
    }
    return p;
}

adr deleteFirst(List &MH){
    adr p, temp;

   temp = next(first(MH));
   p = first(MH);
   first(MH) = NULL;
   first(MH) = temp;
   return p;
}

adr deleteAfter(List &MH, adr prec, adr p){
    adr temp, q;

    temp = next(p);
    q = p;
    p = NULL;
    next(prec) = temp;
    return q;
}
