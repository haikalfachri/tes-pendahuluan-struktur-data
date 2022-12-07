#include "DLL_First_Last.h"
#include "DLL_First_Last.cpp"

int main(){
    cout << "=====Terbimbing=====" << endl;
    cout << endl;
    List L;
    createList(L);
    printList(L);
    insertAscending(L, 25);
    printList(L);
    insertAscending(L, 10);
    printList(L);
    insertAscending(L, 32);
    printList(L);
    insertAscending(L, 3);
    printList(L);
    deleteElm(L, 32);
    printList(L);
    deleteElm(L, 3);
    printList(L);
    deleteElm(L, 10);
    printList(L);
    deleteElm(L, 25);
    printList(L);
    cout << endl;

    cout << "=====Mandiri======" << endl;
    cout << endl;
    insertAscending(L, 25);
    printList(L);
    insertAscending(L, 10);
    printList(L);
    insertAscending(L, 10);
    printList(L);
    insertAscending(L, 25);
    printList(L);
    insertAscending(L, 25);
    printList(L);
    if (findElemen(L, 10)){
        cout << "true" << endl;
    }else{
        cout << "false" << endl;
    }
    cout << frequencyofElm(L, 10) << endl;
    cout << frequencyofElm(L, 25) << endl;
    cout << frequencyofElm(L, 2) << endl;


}
