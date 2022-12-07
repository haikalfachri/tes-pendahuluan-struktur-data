#include "menu.h"

void createList(List &L){
    first(L) = NULL;
}

adr newElement(infotype dataBaru){
    adr p = new elmList;

    info(p) = dataBaru;
    next(p) = NULL;
    return p;
}

void insertLast(List &L, adr p){
    adr last;
    if (first(L) == NULL){
        first(L) = p;
    } else if (next(first(L)) == NULL){
        next(first(L)) = p;
    }else{
        last = next(first(L));
        while (next(last)!= NULL){
            last = next(last);
        }
         next(last) = p;
    }
}

void showAllData(List L){
    adr p;
    int i;

    if (first(L) == NULL){
        cout << "List Kosong!" << endl;
        cout << endl;
    }else{
        i = 1;
        p = first(L);
        cout << "List: " <<endl;
        while (p != NULL){
            cout << "[" << i  << "]";
            cout << info(p) << endl;
            p = next(p);
            i++;
        }
        cout << "List selesai ditampilkan!" << endl;
        cout << endl;
    }
}

int jumlahElement(List L){
    int jumlah;
    adr p;
    jumlah = 0;
    if (first(L) == NULL){
        jumlah += 0;
    }else{
        p = first(L);
        while (p != NULL){
            jumlah += info(p);
            p = next(p);
        }
    return jumlah;
    }
}

void showDataGanjil(List L){
    adr p;
    int i;

    if (first(L) == NULL){
        cout << "List Kosong!" << endl;
        cout << endl;
    }else{
        i = 1;
        p = first(L);
        cout << "List Ganjil: "<< endl;
        while (p != NULL){
            if ((info(p)%2)!=0){
                cout << "[" << i << "]";
                cout << info(p) << endl;
                p = next(p);
                i++;
            }else{
                p = next(p);
            }
        }
        cout << "List selesai ditampilkan!" << endl;
        cout << endl;
    }
}

int selectMenu(){
    cout << "===== MENU =====" << endl;
    cout << "1. Menambah N data baru" << endl;
    cout << "2. Menampilkan semua data " << endl;
    cout << "3. Menampilkan jumlah element pada list" << endl;
    cout << "0. Exit" << endl;
    cout << "Pilihan Menu:  ";

    int input;
    cin >> input;

    return input;
}
