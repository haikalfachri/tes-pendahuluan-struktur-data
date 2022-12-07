#include "bank.h"

int main(){
    List L;
    create_list(L);
    int pilihan;
    infotype data;

    pilihan = selectMenu();
    while (pilihan != 0){
        switch(pilihan){
            case 1:
                adr p;
                char pilihanKembali;
                bool status;
                status = true;
                while (status == true){
                    int n, i;
                    cout << "Jumlah data yang ditambahkan: ";
                    cin >> n;
                    for (i=1; i<=n; i++){
                        cout << "Masukkan data baru ke-" << i << endl;
                        cout << "Masukkan nama nasabah: ";
                        cin >> data.nasabah;
                        cout << "Masukkan nomor rekening: ";
                        cin >> data.rekening;
                        cout << "Masukkan saldo: ";
                        cin >> data.saldo;
                        p = newElement(data);
                        insertLast(L, p);
                        cout << endl;
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
                bool ketemu;
                cout << "Masukkan nama nasabah: ";
                cin >> data.nasabah;
                cout << "Masukkan nomor rekening: ";
                cin >> data.rekening;
                ketemu = searching(L, data);
                if (ketemu == true){
                    cout << "Nasabah: " << data.nasabah << ", No Rekening: " << data.rekening << ", Saldo Rahasia -> Data ditemukan" << endl;
                }else{
                    cout << "Nasabah: " <<data.nasabah << ", No Rekening:  " << data.rekening << ", Saldo Rahasia -> Data tidak ditemukan" << endl;
                }
                cout << endl;
                break;
            }
        pilihan = selectMenu();
        cout << endl;
    }
    return 0;
}
