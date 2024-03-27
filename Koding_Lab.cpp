#include <iostream>
#include <string>

using namespace std;

// Definisikan struct Pegawai
struct Pegawai {
    string nama;
    string departemen;
    int gaji;
};

//menaikkan gaji pegawai sebesar 10%
void naikGaji(Pegawai& pegawai) {
    // meng hitung kenaikan gaji
    int kenaikan = pegawai.gaji * 0.1;
    // Tambahkan kenaikan gaji ke gaji pegawai
    pegawai.gaji += kenaikan;
}

int main() {
    // Buat objek pegawai1
    Pegawai pegawai1;
    pegawai1.nama = "Budi";
    pegawai1.departemen = "IT";
    pegawai1.gaji = 5000000;

    // Panggil fungsi naikGaji untuk pegawai1
    naikGaji(pegawai1);

    // Tampilkan informasi pegawai1 setelah kenaikkan gaji
    cout << "Informasi Pegawai:" << endl;
    cout << "Nama: " << pegawai1.nama << endl;
    cout << "Departemen: " << pegawai1.departemen << endl;
    cout << "Gaji: " << pegawai1.gaji << endl;

    return 0;
}