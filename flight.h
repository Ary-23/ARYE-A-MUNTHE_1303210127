#ifndef FLIGHT_H_INCLUDED
#define FLIGHT_H_INCLUDED

#include<iostream>
using namespace std;

#define first(L) L.first
#define info(P) P->info
#define next(P) P->next
#define kosong NULL

struct dataPenerbangan{
    string kode;
    string jenis;
    string tanggal;
    string waktu;
    string asal;
    string tujuan;
    int kapasitas;
};

typedef dataPenerbangan infotype;
typedef struct DatajadwalPenerbangan *adrJadwal;

struct DatajadwalPenerbangan {
    infotype info;
    adrJadwal next;
};

struct ListJadwal{
    adrJadwal first;
};

void createListJadwal(ListJadwal &L);
adrJadwal createNewDataJadwal(infotype x);
void insertLastJ(ListJadwal &L,adrJadwal p);
void ShowJadwal(ListJadwal L);
void deleteFirstJ(ListJadwal &L,adrJadwal p);
bool searchJ(ListJadwal L,string darimana,string kemana);
void add(ListJadwal &L,int jumlahpenerbangan);
#endif // FLIGHT_H_INCLUDED
