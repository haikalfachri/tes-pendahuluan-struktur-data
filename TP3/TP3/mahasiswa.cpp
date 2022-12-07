#include "mahasiswa.h"

void inputData_1301202398(mahasiswa &M){
    int i = 0;

    cout << "Tuliskan NIM: ";
    cin >> M.NIM;

    while (i < Max){
        cout << "Nilai " << i+1 << ": ";
        cin >> (M.Nilai[i]);
        i++;
    }
}

float mean_1301202398(mahasiswa M){
    float rata, jumlah;
    int i;

    for (i=0; i<Max; i++){
        jumlah = jumlah + M.Nilai[i];
    }
    rata = jumlah / Max;
    return rata;
}

void showData_1301202398(mahasiswa M){
    int i;

    cout << endl;
    cout << "Data Mahasiswa" << endl;
    cout << "NIM: " << M.NIM << endl;
    cout << "Nilai: ";
    for (i=0; i<Max; i++){
        cout << M.Nilai[i] << " ";
    }
    cout << endl;
}
