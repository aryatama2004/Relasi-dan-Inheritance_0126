#include <iostream>
#include <string>
using namespace std;

class dokter;
class pasien { 
    Public :
    string nama;
    vector<dokter*> daftar_dokter;
    pasien(string pNama) :nama(pNama) {
        cout << "pasien \"" << nama <<  "\" tidak ada\n";
    }
    void tambahDokter(dokter*);
    void cetakDokter();    

};

