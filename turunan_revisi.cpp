#include <iostream>

using namespace std;

int main() {
  // Deklarasi variabel
  int populasi_awal;
  double tingkat_kelahiran;
  double tingkat_kematian;
  int durasi;

  // Memasukkan nilai awal
  cout << "Masukkan populasi awal: ";
  cin >> populasi_awal;
  cout << "Masukkan tingkat kelahiran (persen per tahun): ";
  cin >> tingkat_kelahiran;
  cout << "Masukkan tingkat kematian (persen per tahun): ";
  cin >> tingkat_kematian;
  cout << "Masukkan durasi (tahun): ";
  cin >> durasi;

  // Menghitung populasi akhir
  int populasi_akhir = populasi_awal;
  for (int tahun = 0; tahun < durasi; tahun++) {
    // Menghitung kenaikan populasi akibat kelahiran
    int kelahiran = populasi_akhir * tingkat_kelahiran / 100;

    // Menghitung penurunan populasi akibat kematian
    int kematian = populasi_akhir * tingkat_kematian / 100;

    // Menghitung populasi akhir di tahun berikutnya
    populasi_akhir += kelahiran - kematian;
  }

  // Menampilkan hasil
  cout << "Populasi akhir setelah " << durasi << " tahun: " << populasi_akhir << endl;

  return 0;
}
