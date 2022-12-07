#include "menu.h"

int main()
{
    List L;
    createList(L);
    int pilihan;

    pilihan = selectMenu();
    while (pilihan != 0){
        switch(pilihan){
            case 1:
                adr p;
                char pilihanKembali;
                bool status;
                status = true;
                while (status == true){
                    int n, i, data;
                    cout << "Jumlah data yang ditambahkan: ";
                    cin >> n;
                    for (i=1; i<=n; i++){
                        cout << "Masukkan data baru ke-" << i << ": ";
                        cin >> data;
                        p = newElement(data);
                        insertLast(L, p);
                    }
                    cout << "Kembali ke menu utama?(Y/N): ";
                    cin >> pilihanKembali;
                    cout << endl;
                    if (pilihanKembali == 'Y'){
                        status = false;
                    }
                }
                break;
            case 2:
                showAllData(L);
                break;
            case 3:
                int jum;
                jum = jumlahElement(L);
                cout << "Jumlah Element: " << jum << endl;
                cout << endl;
                break;
            }
        pilihan = selectMenu();
        cout << endl;
    }
    return 0;
}
