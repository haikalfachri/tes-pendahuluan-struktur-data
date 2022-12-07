#include "bank.h"

void create_list(List &L){
     first(L) = NULL;
     last(L) = NULL;
}

adr newElement(infotype dataBaru){
    adr p = new elmList;

    info(p) = dataBaru;
    next(p) = NULL;
    prev(p) = NULL;
    return p;
}

void insertLast(List &L, adr p){
    if (first(L)!=NULL && last(L)!=NULL){
        prev(p) = last(L);
        next(last(L)) = p;
        last(L) = p;
    }else{
        first(L) = p;
        last(L) = p;
    }
}

void showAllData(List L){
    adr p;
    int i;

    if (first(L)!=NULL && last(L)!=NULL){
        p = first(L);
        i = 1;
        while (p!=NULL){
            cout << "[" << i << "] ";
            cout << "Nasabah: " <<info(p).nasabah << ", ";
            cout << "No Rekening: " << info(p).rekening << ", ";
            cout << "Saldo: " << info(p).saldo << endl;
            p = next(p);
            i++;
        }
    }else{
        cout << "List Kosong!" << endl;
    }
    cout << endl;

}
//NIM digit = 9 % 3 = 0
bool searching(List L, infotype x){
    bool ketemu;
    adr p;

    ketemu = false;
    p = first(L);
    while (p!= NULL){
        if (info(p).nasabah == x.nasabah && info(p).rekening == x.rekening){
            ketemu = true;
            break;
        }else{
            p = next(p);
        }
    }
    return ketemu;
}

int selectMenu(){
    cout << "===== MENU =====" << endl;
    cout << "1. Menambah N data baru" << endl;
    cout << "2. Menampilkan semua data" << endl;
    cout << "3. Mencari nasabah" << endl;
    cout << "0. Exit" << endl;
    cout << "Pilihan Menu:  ";

    int input;
    cin >> input;

    return input;
}



