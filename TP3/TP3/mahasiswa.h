#ifndef MAHASISWA_H_INCLUDED
#define MAHASISWA_H_INCLUDED
#include <iostream>

using namespace std;

const int Max = 5;

struct mahasiswa{
    string NIM;
    float Nilai[Max];
};

void inputData_1301202398(mahasiswa &M);
float mean_1301202398(mahasiswa M);
void showData_1301202398(mahasiswa M);


#endif // MAHASISWA_H_INCLUDED
