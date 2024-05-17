#include <iostream>
using namespace std;

// Deklarasi kelas
class Penjualan {
public:
    string nama_grup;
    int banyak_album_terjual_juta_copy;
    string nama_album;

    // Metode untuk menampilkan Penjualan_album_terbanyak
    void Penjualan_album_terbanyak() {
        cout << "nama grup: " << nama_grup << endl;
        cout << "banyak album terjual juta copy: " << banyak_album_terjual_juta_copy << endl;
        cout << "nama album: " << nama_album << endl;
    }
};

int main() {
    // Membuat objek dari kelas Penjualan_album_terbanyak
    Penjualan album;

    album.nama_grup = "Seventeen";
    album.banyak_album_terjual_juta_copy = 28;
    album.nama_album = "Fuck My Life";

// Memanggil metode untuk menampilkan informasi
    album.Penjualan_album_terbanyak();

    return 0;
};