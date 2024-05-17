#include <iostream>
#include <string>

class Penjualan_album_terbanyak {
    // Bagian private hanya dapat diakses oleh member functions dalam kelas ini
private:
    std::string nama_grup;
    int banyak_penjualan_album_juta;
    std ::string nama_album; 

    // Bagian public dapat diakses dari luar kelas
public:
    // Konstruktor untuk menginisialisasi objek Penjualan_album_terbanyak
    Penjualan_album_terbanyak(std::string g, int a, std::string n) {
        nama_grup = g;
        banyak_penjualan_album_juta = a;
        nama_album = n;
    }

    // Setter untuk mengatur nama_grup
    void setNama_Grup(std::string g) {
        nama_grup = g;
    }

    // Getter untuk mendapatkan nama_grup
    std::string getNama_grup() {
        return nama_grup;
    }

    // Setter untuk mengatur banyak_penjualan_album_juta
    void setBanyak_penjualan_album_juta(int a) {
        banyak_penjualan_album_juta = a;
    }

    // Getter untuk mendapatkan banyak_penjualan_album_juta
    int getBanyak_penjualan_album_juta() {
        return banyak_penjualan_album_juta;
    }

    // Setter untuk mengatur nama_grup
    void setnama_grup (std::string n) {
        nama_grup = n; 
    }

    // Getter untuk mendapatkan nama_album
    std::string getnama_album() {
        return nama_album;
    }

    // Metode untuk Penjualan_album_terbanyak
    void penjualan_album_terbanyak() {
        std::cout << "nama_grup: " << nama_grup << ", banyak_penjualan_album_juta,: " << banyak_penjualan_album_juta << ", nama_album: "<< nama_album<< std::endl;
    }
};

int main() {

    // Membuat objek Penjualan_album_terbanyak a1
    Penjualan_album_terbanyak a1("Seventeen", 28, "Fuck_my_life");
    a1.penjualan_album_terbanyak();

// Membuat objek Penjualan_album_terbanyak a2
    Penjualan_album_terbanyak a2("Nct_Dream", 16, "ISTJ");
    a2.penjualan_album_terbanyak();

    return 0;
}
